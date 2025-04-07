#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e840);
CLANG_FORWARD_PROC_SYMBOL(public_636e920);

#define public_636e85e _public_636e85e
#define public_636e860 _public_636e860
#define public_636e8b5 _public_636e8b5
#define public_636e8bc _public_636e8bc
#define public_636e8c5 _public_636e8c5
#define public_636e8d9 _public_636e8d9

PROC_DECLARE(0x636e840, internal_636e840, public_636e840);
extern "C" NAKED register_t __cdecl internal_636e840()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebp, dword ptr ds : [esi]
        test ebp, ebp
        je public_636e8d9
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [ebp+eax*4+4]
        test esi, esi
        je public_636e85e
        dec esi
        jmp public_636e860
        public_636e85e : nop
        mov esi, eax
        public_636e860 : nop
        mov eax, dword ptr ds : [public_658b9c4]
        push ebx
        mov ebx, dword ptr ds : [public_658b9c0]
        lea edx, ds:[esi+esi]
        push edi
        lea ecx, ds:[eax+esi+1]
        inc ebx
        push edx
        mov dword ptr ds : [public_658b9c0], ebx
        mov dword ptr ds : [public_658b9c4], ecx
        call public_636e920
        mov ebx, eax
        lea eax, ds:[esi+1]
        mov ecx, eax
        lea esi, ss:[ebp+4]
        lea edi, ds:[ebx+4]
        rep movsd
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [ebx+ecx*4+4], eax
        mov eax, dword ptr ds : [public_658b990]
        add esp, 4
        test eax, eax
        je public_636e8c5
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        add eax, 4
        test ecx, ecx
        je public_636e8c5
        public_636e8b5 : nop
        cmp ecx, ebp
        jne public_636e8bc
        mov dword ptr ds : [eax-4], ebx
        public_636e8bc : nop
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        test ecx, ecx
        jne public_636e8b5
        public_636e8c5 : nop
        mov esi, dword ptr ss : [esp+0x14]
        push esi
        call public_636e740
        add esp, 4
        pop edi
        mov dword ptr ds : [esi], ebx
        pop ebx
        pop esi
        pop ebp
        ret 
        public_636e8d9 : nop
        push 3
        call public_636e920
        add esp, 4
        mov dword ptr ds : [esi], eax
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x636e840)
    }
}

#undef public_636e85e
#undef public_636e860
#undef public_636e8b5
#undef public_636e8bc
#undef public_636e8c5
#undef public_636e8d9
