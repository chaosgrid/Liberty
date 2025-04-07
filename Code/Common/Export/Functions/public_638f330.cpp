#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ef40);
CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_638f330);
CLANG_FORWARD_PROC_SYMBOL(public_6391cb0);

#define public_638f34d _public_638f34d
#define public_638f381 _public_638f381
#define public_638f39d _public_638f39d
#define public_638f3d7 _public_638f3d7
#define public_638f3fc _public_638f3fc

PROC_DECLARE(0x638f330, internal_638f330, public_638f330);
extern "C" NAKED register_t __cdecl internal_638f330()
{
    __asm
    {
        cmp dword ptr ds : [public_658b078], 4
        jl public_638f34d
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fad08 @0x638f33e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fad08
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638f34d : nop
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push edi
        call public_63705e0
        push edi
        call public_636ef40
        mov ecx, dword ptr ds : [edi+0x50]
        mov ebp, dword ptr ss : [esp+0x18]
        and ecx, 0xFFFFEFFF
        or ecx, 0x10000200
        mov dword ptr ds : [edi+0x50], ecx
        mov esi, dword ptr ss : [ebp+0x20]
        add esp, 8
        test esi, esi
        je public_638f39d
        push ebx
        public_638f381 : nop
        mov ebx, dword ptr ds : [esi+0x20]
        push edi
        push esi
        call public_6391cb0
        xor edx, edx
        add esp, 8
        cmp esi, ebp
        sete dl
        dec edx
        and edx, ebx
        mov esi, edx
        jne public_638f381
        pop ebx
        public_638f39d : nop
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        je public_638f3d7
        mov eax, dword ptr ds : [edi+0x34]
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b24c]
        add ecx, 5
        add esp, 4
        cmp eax, ecx
        jg public_638f3d7
        mov edx, dword ptr ds : [public_658b804]
        mov eax, dword ptr ds : [edi+0x28]
        push edx
        push eax
        call public_6377fe0
        add esp, 8
        mov dword ptr ds : [edi+0x28], 0
        public_638f3d7 : nop
        cmp dword ptr ds : [public_658b078], 3
        jl public_638f3fc
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [ebp+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63facc8 @0x638f3ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63facc8
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_638f3fc : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638f330)
    }
}

#undef public_638f34d
#undef public_638f381
#undef public_638f39d
#undef public_638f3d7
#undef public_638f3fc
