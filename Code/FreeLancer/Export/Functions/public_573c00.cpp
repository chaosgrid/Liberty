#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5602f0);
CLANG_FORWARD_PROC_SYMBOL(public_567350);
CLANG_FORWARD_PROC_SYMBOL(public_56d8f0);
CLANG_FORWARD_PROC_SYMBOL(public_5727b0);
CLANG_FORWARD_PROC_SYMBOL(public_575450);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_576190);
CLANG_FORWARD_PROC_SYMBOL(public_57a610);
CLANG_FORWARD_PROC_SYMBOL(public_58d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_591de0);
CLANG_FORWARD_PROC_SYMBOL(public_59dc00);

#define public_573c22 _public_573c22
#define public_573c61 _public_573c61
#define public_573c67 _public_573c67
#define public_573c85 _public_573c85
#define public_573cbc _public_573cbc
#define public_573cc8 _public_573cc8
#define public_573cd8 _public_573cd8
#define public_573d47 _public_573d47
#define public_573db5 _public_573db5
#define public_573dec _public_573dec
#define public_573df8 _public_573df8
#define public_573ea8 _public_573ea8

PROC_DECLARE(0x573c00, internal_573c00, public_573c00);
extern "C" NAKED register_t __cdecl internal_573c00()
{
    __asm
    {
        sub esp, 0x2C
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x228]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+8], esi
        je public_573c22
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov dword ptr ds : [esi+0x228], ebp
        public_573c22 : nop
        mov ecx, offset public_67b7fc
        call public_576190
        mov eax, dword ptr ds : [public_67bccc]
        cmp eax, ebp
        je public_573c67
        push eax
        call dword ptr ds : [public_5c6f08]
        test eax, eax
        jne public_573c61
        call dword ptr ds : [public_5c6f04]
        push eax
/*FIXUP push offset public_5e27a0 @0x573c47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e27a0
        push 2
        push 0x17ED
/*FIXUP push offset public_5e2724 @0x573c53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2724
        call dword ptr ds : [public_5c6bd0]
        add esp, 0x14
        public_573c61 : nop
        mov dword ptr ds : [public_67bccc], ebp
        public_573c67 : nop
        mov al, byte ptr ds : [public_67b7ec]
        push ebx
        mov ebx, dword ptr ds : [public_67b78c]
        and al, 0xFC
        cmp ebx, ebp
        push edi
        mov dword ptr ds : [public_67bcd0], ebp
        mov byte ptr ds : [public_67b7ec], al
        je public_573cc8
        public_573c85 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_575450
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x28]
        mov edi, offset public_5cb118
        lea esi, ss:[esp+0x1C]
        mov ecx, 0xE
        xor edx, edx
        repe cmpsb
        jne public_573cbc
        mov eax, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [eax]
        public_573cbc : nop
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, ebp
        jne public_573c85
        mov esi, dword ptr ss : [esp+0x10]
        public_573cc8 : nop
        mov ecx, dword ptr ds : [public_67bcc8]
        cmp ecx, ebp
        je public_573cd8
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
/*FIXUP public_573cd8 : nop
        push offset public_67b780 @0x573cd8*/
  FIXUP public_573cd8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67b780
        mov dword ptr ds : [public_67bcc8], ebp
        call public_59dc00
        add esp, 4
        push 0xF
        mov ecx, offset public_67b200
        call public_5760f0
        mov ecx, dword ptr ds : [public_67b438]
        cmp ecx, ebp
        je public_573d47
/*FIXUP push offset public_67b720 @0x573d01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67b720
        call public_58d0f0
        mov ecx, offset public_67b180
        call public_567350
        mov ecx, dword ptr ds : [public_67b438]
        call public_57a610
        mov ecx, dword ptr ds : [public_67b508]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ds : [public_67b438]
        call public_57a610
        mov ecx, dword ptr ds : [public_67b50c]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        public_573d47 : nop
        mov ecx, offset public_67b180
        call public_591de0
        mov al, byte ptr ds : [public_67ae7c]
        mov ebx, dword ptr ds : [public_67ae1c]
        and al, 0xFC
        cmp ebx, ebp
        mov dword ptr ds : [public_67b438], ebp
        mov dword ptr ds : [public_67b43c], ebp
        mov dword ptr ds : [public_67b440], ebp
        mov dword ptr ds : [public_67b444], ebp
        mov dword ptr ds : [public_67b448], ebp
        mov dword ptr ds : [public_67b44c], ebp
        mov dword ptr ds : [public_67b450], ebp
        mov dword ptr ds : [public_67b454], ebp
        mov dword ptr ds : [public_67b458], ebp
        mov dword ptr ds : [public_67b45c], ebp
        mov dword ptr ds : [public_67b460], ebp
        mov dword ptr ds : [public_67b464], ebp
        mov dword ptr ds : [public_67b468], ebp
        mov byte ptr ds : [public_67ae7c], al
        je public_573df8
        public_573db5 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ds : [ebx+8]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x18], edx
        call public_575450
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x28]
        mov edi, offset public_5cb118
        lea esi, ss:[esp+0x1C]
        mov ecx, 0xE
        xor eax, eax
        repe cmpsb
        jne public_573dec
        mov edx, dword ptr ds : [ebx]
        push 1
        mov ecx, ebx
        call dword ptr ds : [edx]
        public_573dec : nop
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, ebp
        jne public_573db5
        mov esi, dword ptr ss : [esp+0x10]
        public_573df8 : nop
        mov ecx, offset public_67ae10
        call public_591de0
        push 0xF
        mov ecx, offset public_67ae90
        call public_5760f0
        mov ecx, offset public_67a890
        mov dword ptr ds : [public_67aed4], ebp
        mov dword ptr ds : [public_67aed8], ebp
        mov dword ptr ds : [public_67aedc], ebp
        mov dword ptr ds : [public_67aee0], ebp
        mov dword ptr ds : [public_67aec8], ebp
        mov dword ptr ds : [public_67aecc], ebp
        mov dword ptr ds : [public_67aed0], ebp
        mov dword ptr ds : [public_67aee4], ebp
        mov dword ptr ds : [public_67aee8], ebp
        mov dword ptr ds : [public_67aeec], ebp
        mov dword ptr ds : [public_67aef0], ebp
        mov dword ptr ds : [public_67aef4], ebp
        mov dword ptr ds : [public_67aef8], ebp
        mov dword ptr ds : [public_67aefc], ebp
        mov dword ptr ds : [public_67af00], ebp
        call public_5602f0
        mov ecx, offset public_67ab20
        call public_56d8f0
        mov ecx, offset public_67aa10
        call public_5727b0
        mov ecx, offset public_67a7d0
        call public_591de0
        mov eax, dword ptr ds : [esi+0x224]
        cmp eax, ebp
        pop edi
        pop ebx
        je public_573ea8
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x224], ebp
        public_573ea8 : nop
        pop esi
        pop ebp
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x573c00)
    }
}

#undef public_573c22
#undef public_573c61
#undef public_573c67
#undef public_573c85
#undef public_573cbc
#undef public_573cc8
#undef public_573cd8
#undef public_573d47
#undef public_573db5
#undef public_573dec
#undef public_573df8
#undef public_573ea8
