#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68051d0);
CLANG_FORWARD_PROC_SYMBOL(public_6805370);
CLANG_FORWARD_PROC_SYMBOL(public_6805460);
CLANG_FORWARD_PROC_SYMBOL(public_6805520);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

#define public_68054a3 _public_68054a3
#define public_68054cd _public_68054cd
#define public_68054df _public_68054df

PROC_DECLARE(0x6805460, internal_6805460, public_6805460);
extern "C" NAKED register_t __cdecl internal_6805460()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        push edi
        push ebx
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6805520
        mov edi, eax
        push edi
        mov dword ptr ss : [esp+0x1C], edi
        call public_6805370
        add esp, 8
        test esi, esi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], 0
        jle public_68054df
        mov dword ptr ss : [esp+0x20], esi
        public_68054a3 : nop
        cmp dword ptr ss : [ebp+0x10], 0xFFFFFFFA
        je public_68054cd
        push ebp
        push ebx
        call public_68051d0
        mov edi, eax
        mov ecx, 8
        mov esi, ebp
        rep movsd
        mov eax, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc eax
        mov dword ptr ds : [ebx+0x10], eax
        public_68054cd : nop
        mov eax, dword ptr ss : [esp+0x20]
        add ebp, 0x20
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        jne public_68054a3
        mov ebp, dword ptr ss : [esp+0x18]
        public_68054df : nop
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, edi
        cdq 
        and edx, 0xF
        add eax, edx
        mov edi, eax
        mov eax, esi
        mov esi, dword ptr ds : [ecx+0x78]
        cdq 
        and edx, 0xF
        add eax, edx
        sar eax, 4
        sar edi, 4
        sub edi, eax
        push 0
        add esi, edi
        push ebp
        mov dword ptr ds : [ecx+0x78], esi
        call public_68065d0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6805460)
    }
}

#undef public_68054a3
#undef public_68054cd
#undef public_68054df
