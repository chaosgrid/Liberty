#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636f3a0);
CLANG_FORWARD_PROC_SYMBOL(public_63705e0);

#define public_636f3c7 _public_636f3c7
#define public_636f3d9 _public_636f3d9
#define public_636f3eb _public_636f3eb
#define public_636f429 _public_636f429
#define public_636f44c _public_636f44c
#define public_636f461 _public_636f461
#define public_636f47e _public_636f47e
#define public_636f49d _public_636f49d
#define public_636f4bc _public_636f4bc
#define public_636f4cf _public_636f4cf
#define public_636f4f9 _public_636f4f9

PROC_DECLARE(0x636f3a0, internal_636f3a0, public_636f3a0);
extern "C" NAKED register_t __cdecl internal_636f3a0()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 5
        push esi
        mov esi, dword ptr ss : [esp+8]
        jl public_636f3c7
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push eax
/*FIXUP push offset public_63eee50 @0x636f3b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eee50
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_636f3c7 : nop
        cmp esi, dword ptr ds : [public_658b82c]
        jne public_636f3d9
        mov dword ptr ds : [public_658b82c], 0
        public_636f3d9 : nop
        cmp esi, dword ptr ds : [public_658b874]
        jne public_636f3eb
        mov dword ptr ds : [public_658b874], 0
        public_636f3eb : nop
        push esi
        call public_63705e0
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        test eax, eax
        je public_636f429
        mov eax, dword ptr ds : [public_658b9ac]
        mov edx, dword ptr ds : [public_658b804]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov edx, dword ptr ds : [public_658b978]
        lea eax, ds:[edx+ecx*4]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], ecx
        public_636f429 : nop
        cmp dword ptr ds : [public_658b86c], 1
        mov eax, dword ptr ds : [esi+0x28]
        jne public_636f44c
        test eax, eax
        je public_636f47e
        mov eax, dword ptr ds : [public_658b9ac]
        mov edx, dword ptr ds : [public_658b808]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        jmp public_636f461
        public_636f44c : nop
        test eax, eax
        je public_636f47e
        mov eax, dword ptr ds : [public_658b9ac]
        mov edx, dword ptr ds : [public_658b804]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        public_636f461 : nop
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+edx*4]
        mov edx, dword ptr ds : [public_658b978]
        lea eax, ds:[edx+ecx*4]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [eax], ecx
        public_636f47e : nop
        lea edx, ds:[esi+0x3C]
        push edx
        call public_636e740
        mov ecx, dword ptr ds : [esi+0x38]
        lea eax, ds:[esi+0x38]
        add esp, 4
        test ecx, ecx
        je public_636f49d
        push eax
        call public_636e740
        add esp, 4
        public_636f49d : nop
        lea eax, ds:[esi+0x34]
        push eax
        call public_636e740
        mov ecx, dword ptr ds : [esi+0x40]
        lea eax, ds:[esi+0x40]
        add esp, 4
        test ecx, ecx
        je public_636f4bc
        push eax
        call public_636e740
        add esp, 4
        public_636f4bc : nop
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, ecx
        lea eax, ds:[esi+0x44]
        je public_636f4cf
        push eax
        call public_636e740
        add esp, 4
        public_636f4cf : nop
        test esi, esi
        je public_636f4f9
        mov eax, dword ptr ds : [public_658b9ac]
        mov ecx, dword ptr ds : [public_658b980]
        inc eax
        mov dword ptr ds : [public_658b9ac], eax
        mov edx, dword ptr ds : [ecx+0x160]
        mov eax, dword ptr ds : [public_658b978]
        mov ecx, dword ptr ds : [eax+edx*4]
        lea eax, ds:[eax+edx*4]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], esi
        public_636f4f9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x636f3a0)
    }
}

#undef public_636f3c7
#undef public_636f3d9
#undef public_636f3eb
#undef public_636f429
#undef public_636f44c
#undef public_636f461
#undef public_636f47e
#undef public_636f49d
#undef public_636f4bc
#undef public_636f4cf
#undef public_636f4f9
