#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805170);

#define public_680517f _public_680517f
#define public_680518d _public_680518d
#define public_68051af _public_68051af
#define public_68051bc _public_68051bc

PROC_DECLARE(0x6805170, internal_6805170, public_6805170);
extern "C" NAKED register_t __cdecl internal_6805170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        public_680517f : nop
        mov ecx, dword ptr ds : [eax+0x68]
        xor edi, edi
        test ecx, ecx
        jg public_68051af
        mov esi, ebp
        shl esi, 4
        public_680518d : nop
        mov eax, dword ptr ds : [eax+0x64]
        add eax, esi
        push eax
        call ebx
        add esp, 4
        test eax, eax
        jne public_68051bc
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x68]
        dec edi
        add esi, 0x120
        cmp edi, ecx
        jge public_680518d
        public_68051af : nop
        inc ebp
        cmp ebp, 0x11
        jle public_680517f
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_68051bc : nop
        mov eax, dword ptr ds : [ebp*4+public_680d5c4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6805170)
    }
}

#undef public_680517f
#undef public_680518d
#undef public_68051af
#undef public_68051bc
