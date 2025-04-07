#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7460);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec7481 _public_6ec7481
#define public_6ec74a5 _public_6ec74a5

PROC_DECLARE(0x6ec7460, internal_6ec7460, public_6ec7460);
extern "C" NAKED register_t __cdecl internal_6ec7460()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        mov ebp, ecx
        call public_6ed0c5c
        add esp, 4
        test ebx, ebx
        mov esi, eax
        mov dword ptr ds : [esi], edi
        jne public_6ec7481
        mov ebx, esi
        public_6ec7481 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [edi+4], esi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], esi
        lea eax, ds:[esi+8]
        test eax, eax
        je public_6ec74a5
        mov ecx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        mov dword ptr ds : [eax], ecx
        je public_6ec74a5
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+4]
        public_6ec74a5 : nop
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec7460)
    }
}

#undef public_6ec7481
#undef public_6ec74a5
