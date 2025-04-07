#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f57740);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f66ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f739c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fae438);

#define public_6f28441 _public_6f28441
#define public_6f28484 _public_6f28484
#define public_6f28497 _public_6f28497
#define public_6f284ac _public_6f284ac
#define public_6f284be _public_6f284be
#define public_6f284db _public_6f284db
#define public_6f284f6 _public_6f284f6
#define public_6f28539 _public_6f28539

PROC_DECLARE(0x6f283b0, internal_6f283b0, public_6f283b0);
extern "C" NAKED register_t __cdecl internal_6f283b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fae438 @0x6f283b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fae438
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [eax+4]
        mov cl, byte ptr ss : [esp+0x34]
        xor esi, esi
        push esi
        mov byte ptr ss : [esp+0x1C], cl
        push esi
        lea ecx, ss:[esp+0x20]
        call public_6f93790
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], esi
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x2C], esi
        call public_6eea860
        mov edi, eax
        cmp edi, esi
        mov dword ptr ss : [esp+0x10], edi
        je public_6f284db
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6f1e390
        mov esi, dword ptr ds : [ebx+0x114]
        cmp esi, dword ptr ds : [ebx+0x118]
        mov dword ptr ss : [esp+0xC], esi
        je public_6f284be
        push ebp
        public_6f28441 : nop
        push esi
        mov ecx, edi
        call public_6f739c0
        mov ebp, eax
        test ebp, ebp
        je public_6f284ac
        mov ecx, dword ptr ss : [esp+0x38]
        test ecx, ecx
        je public_6f284ac
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6f284ac
        mov ecx, ebp
        call public_6f57740
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov ebx, eax
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebx
        jne public_6f28484
        mov edi, eax
        public_6f28484 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f28497
        mov dword ptr ds : [eax], ebp
        public_6f28497 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x18]
        inc eax
        mov dword ptr ss : [esp+0x24], eax
        public_6f284ac : nop
        mov eax, dword ptr ds : [ebx+0x118]
        add esi, 0x34
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f28441
        pop ebp
        public_6f284be : nop
        mov eax, dword ptr ds : [ebx+0x10C]
        xor edx, edx
        mov dl, byte ptr ds : [ebx+0x120]
        lea ecx, ss:[esp+0x18]
        push edx
        push eax
        push ecx
        call public_6f66ec0
        add esp, 0xC
        public_6f284db : nop
        mov ecx, dword ptr ss : [esp+0x34]
        call public_6f57b00
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f28539
        public_6f284f6 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        call public_6f68e30
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], ecx
        jne public_6f284f6
        mov edi, dword ptr ss : [esp+0x1C]
        public_6f28539 : nop
        push edi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6f283b0)
    }
}

#undef public_6f28441
#undef public_6f28484
#undef public_6f28497
#undef public_6f284ac
#undef public_6f284be
#undef public_6f284db
#undef public_6f284f6
#undef public_6f28539
