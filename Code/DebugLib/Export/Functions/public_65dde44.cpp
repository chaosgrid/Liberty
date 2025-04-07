#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65dde44);
CLANG_FORWARD_PROC_SYMBOL(public_65def26);
CLANG_FORWARD_PROC_SYMBOL(public_65def65);

#define public_65dde75 _public_65dde75
#define public_65dde86 _public_65dde86
#define public_65ddeae _public_65ddeae
#define public_65ddeb3 _public_65ddeb3
#define public_65ddebb _public_65ddebb
#define public_65ddebd _public_65ddebd

PROC_DECLARE(0x65dde44, internal_65dde44, public_65dde44);
extern "C" NAKED register_t __cdecl internal_65dde44()
{
    __asm
    {
        cmp dword ptr ds : [public_65e7a44], 0
        push ebx
        push esi
        mov esi, dword ptr ds : [public_65e6154]
        push edi
        je public_65ddebb
        test esi, esi
        jne public_65dde75
        cmp dword ptr ds : [public_65e615c], esi
        je public_65ddebb
        call public_65def65
        test eax, eax
        jne public_65ddebb
        mov esi, dword ptr ds : [public_65e6154]
        test esi, esi
        je public_65ddebb
        public_65dde75 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        test ebx, ebx
        je public_65ddebb
        push ebx
        call public_65d8120
        pop ecx
        mov edi, eax
        public_65dde86 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65ddebb
        push eax
        call public_65d8120
        cmp eax, edi
        pop ecx
        jbe public_65ddeae
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+edi], 0x3D
        jne public_65ddeae
        push edi
        push ebx
        push eax
        call public_65def26
        add esp, 0xC
        test eax, eax
        je public_65ddeb3
        public_65ddeae : nop
        add esi, 4
        jmp public_65dde86
        public_65ddeb3 : nop
        mov eax, dword ptr ds : [esi]
        lea eax, ds:[eax+edi+1]
        jmp public_65ddebd
        public_65ddebb : nop
        xor eax, eax
        public_65ddebd : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65dde44)
    }
}

#undef public_65dde75
#undef public_65dde86
#undef public_65ddeae
#undef public_65ddeb3
#undef public_65ddebb
#undef public_65ddebd
