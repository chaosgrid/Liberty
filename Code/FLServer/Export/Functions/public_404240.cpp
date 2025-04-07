#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404240);
CLANG_FORWARD_PROC_SYMBOL(public_405460);
CLANG_FORWARD_PROC_SYMBOL(public_405b90);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4042aa _public_4042aa
#define public_4042c8 _public_4042c8
#define public_4042f0 _public_4042f0
#define public_4042fb _public_4042fb
#define public_404310 _public_404310
#define public_40431c _public_40431c
#define public_404328 _public_404328

PROC_DECLARE(0x404240, internal_404240, public_404240);
extern "C" NAKED register_t __cdecl internal_404240()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x21]
        test al, al
        jne public_4042c8
        mov al, byte ptr ss : [ebp+0x20]
        push edi
        push 0x24
        mov byte ptr ss : [esp+0x14], al
        call public_418a9e
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x20], dl
        mov byte ptr ds : [edi+0x21], 0
        call public_405b90
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_4042aa
        mov ebx, edi
        public_4042aa : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_405460
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_405460
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_4042c8 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_404328
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        jne public_4042fb
        mov edi, edi
        public_4042f0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_4042f0
        public_4042fb : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        jne public_40431c
        lea ecx, ds:[ecx]
        public_404310 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x21]
        test dl, dl
        je public_404310
        public_40431c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_404328 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x404240)
    }
}

#undef public_4042aa
#undef public_4042c8
#undef public_4042f0
#undef public_4042fb
#undef public_404310
#undef public_40431c
#undef public_404328
