#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62684a6 _public_62684a6
#define public_62684bb _public_62684bb
#define public_62684e7 _public_62684e7

PROC_DECLARE(0x6268490, internal_6268490, public_6268490);
extern "C" NAKED register_t __cdecl internal_6268490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov ebp, ecx
        je public_62684e7
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_62684a6 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_62684bb
        mov ebx, eax
        public_62684bb : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push esi
        push eax
        call public_626c1e0
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        inc edx
        add esi, 0x20
        cmp esi, eax
        mov dword ptr ss : [ebp+8], edx
        jne public_62684a6
        pop edi
        pop ebx
        public_62684e7 : nop
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6268490)
    }
}

#undef public_62684a6
#undef public_62684bb
#undef public_62684e7
