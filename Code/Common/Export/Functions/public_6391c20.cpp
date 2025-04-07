#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391c20);

#define public_6391c40 _public_6391c40
#define public_6391c4a _public_6391c4a
#define public_6391c73 _public_6391c73
#define public_6391c8b _public_6391c8b
#define public_6391c99 _public_6391c99

PROC_DECLARE(0x6391c20, internal_6391c20, public_6391c20);
extern "C" NAKED register_t __cdecl internal_6391c20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        push esi
        push edi
        je public_6391c99
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6391c8b
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6391c40 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_6391c4a
        mov eax, dword ptr ds : [esi+8]
        public_6391c4a : nop
        mov ecx, dword ptr ds : [public_658b8e0]
        cmp dword ptr ds : [eax+0x48], ecx
        jne public_6391c73
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        call public_636e7d0
        add esp, 8
        test eax, eax
        je public_6391c73
        push esi
        push ebp
        call public_636e1b0
        add esp, 8
        public_6391c73 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6391c40
        mov ecx, dword ptr ds : [public_658b8e0]
        pop ebp
        pop edi
        dec ecx
        pop esi
        mov dword ptr ds : [ebx+0x48], ecx
        pop ebx
        ret 
        public_6391c8b : nop
        mov edx, dword ptr ds : [public_658b8e0]
        pop edi
        dec edx
        pop esi
        mov dword ptr ds : [ebx+0x48], edx
        pop ebx
        ret 
        public_6391c99 : nop
        mov eax, dword ptr ds : [public_658b8e0]
        pop edi
        dec eax
        pop esi
        mov dword ptr ds : [ebx+0x48], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6391c20)
    }
}

#undef public_6391c40
#undef public_6391c4a
#undef public_6391c73
#undef public_6391c8b
#undef public_6391c99
