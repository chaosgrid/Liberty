#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391a40);

#define public_6391a6a _public_6391a6a
#define public_6391a76 _public_6391a76
#define public_6391ab6 _public_6391ab6
#define public_6391aca _public_6391aca
#define public_6391ad3 _public_6391ad3
#define public_6391b09 _public_6391b09
#define public_6391b15 _public_6391b15

PROC_DECLARE(0x6391a40, internal_6391a40, public_6391a40);
extern "C" NAKED register_t __cdecl internal_6391a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        and dword ptr ds : [esi+0x50], 0xFBFFFFFF
        mov eax, dword ptr ds : [eax+0x38]
        test eax, eax
        push edi
        mov edi, 0xFDFFFFFF
        je public_6391a76
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6391a76
        public_6391a6a : nop
        and dword ptr ds : [eax+0xC], edi
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6391a6a
        public_6391a76 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_6391b15
        mov ecx, dword ptr ds : [esi+0x34]
        push ecx
        call public_636ec10
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [public_658b24c]
        add esp, 4
        test ecx, 0x8000000
        jne public_6391ab6
        add edx, 5
        cmp eax, edx
        jle public_6391ad3
        or ecx, 0x8000000
        mov dword ptr ds : [esi+0x50], ecx
        inc dword ptr ds : [public_658bfe0]
        jmp public_6391ad3
        public_6391ab6 : nop
        lea ebx, ds:[edx+5]
        cmp eax, ebx
        jg public_6391ad3
        cmp eax, edx
        je public_6391aca
        mov eax, dword ptr ds : [public_658b8c0]
        test eax, eax
        je public_6391ad3
        public_6391aca : nop
        and ecx, 0xF7FFFFFF
        mov dword ptr ds : [esi+0x50], ecx
        public_6391ad3 : nop
        test dword ptr ds : [esi+0x50], 0x8000000
        jne public_6391b15
        mov eax, dword ptr ds : [public_658b804]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        push ecx
        call public_6377fe0
        mov dword ptr ds : [esi+0x28], 0
        mov esi, dword ptr ds : [esi+0x38]
        add esp, 8
        test esi, esi
        je public_6391b15
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+4]
        add ecx, 4
        test eax, eax
        je public_6391b15
        public_6391b09 : nop
        and dword ptr ds : [eax+0xC], edi
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6391b09
        public_6391b15 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6391a40)
    }
}

#undef public_6391a6a
#undef public_6391a76
#undef public_6391ab6
#undef public_6391aca
#undef public_6391ad3
#undef public_6391b09
#undef public_6391b15
