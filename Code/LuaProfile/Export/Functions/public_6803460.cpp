#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6803460);
CLANG_FORWARD_PROC_SYMBOL(public_6803660);
CLANG_FORWARD_PROC_SYMBOL(public_6803690);
CLANG_FORWARD_PROC_SYMBOL(public_68052b0);
CLANG_FORWARD_PROC_SYMBOL(public_6805ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6805bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6805c20);
CLANG_FORWARD_PROC_SYMBOL(public_68064b0);
CLANG_FORWARD_PROC_SYMBOL(public_6806520);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

PROC_DECLARE(0x6803460, internal_6803460, public_6803460);
extern "C" NAKED register_t __cdecl internal_6803460()
{
    __asm
    {
        push esi
        call public_6805bc0
        mov esi, eax
        mov eax, dword ptr ds : [public_680e604]
        mov dword ptr ds : [eax+0x74], 0x7FFFFFFD
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x50]
        push edx
        call public_6803660
        push esi
        call public_6803690
/*FIXUP push offset public_680d968 @0x6803489*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d968
        call public_6802fa0
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x50]
        push ecx
        call public_68052b0
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+0x40]
        push eax
        call public_68064b0
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x48]
        push edx
        call public_6806520
        push esi
        call public_6805ac0
        call public_6805c20
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        push 0
        push ecx
        call public_68065d0
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+0x64]
        push 0
        push eax
        call public_68065d0
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+0x6C]
        push 0
        push edx
        call public_68065d0
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x1C]
        push 0
        push ecx
        call public_68065d0
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+0x2C]
        push 0
        push eax
        call public_68065d0
        mov ecx, dword ptr ds : [public_680e604]
        add esp, 0x44
        push 0
        push ecx
        call public_68065d0
        add esp, 8
        mov dword ptr ds : [public_680e604], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6803460)
    }
}
