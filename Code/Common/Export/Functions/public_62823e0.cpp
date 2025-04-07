#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbb50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62823f7 _public_62823f7
#define public_628242c _public_628242c
#define public_628242e _public_628242e
#define public_6282434 _public_6282434

PROC_DECLARE(0x62823e0, internal_62823e0, public_62823e0);
extern "C" NAKED register_t __cdecl internal_62823e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0xC], ecx
        je public_6282434
        mov esi, dword ptr ds : [edi]
        cmp esi, ebx
        je public_6282434
        public_62823f7 : nop
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ds:[edi+8]
        call public_62bbb50
        test al, al
        je public_628242c
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 4
        dec ecx
        mov dword ptr ds : [eax+8], ecx
        jmp public_628242e
        public_628242c : nop
        mov edi, esi
        public_628242e : nop
        mov esi, dword ptr ds : [edi]
        cmp esi, ebx
        jne public_62823f7
        public_6282434 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62823e0)
    }
}

#undef public_62823f7
#undef public_628242c
#undef public_628242e
#undef public_6282434
