#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e800);
CLANG_FORWARD_PROC_SYMBOL(public_636f780);
CLANG_FORWARD_PROC_SYMBOL(public_636fd10);
CLANG_FORWARD_PROC_SYMBOL(public_63702f0);
CLANG_FORWARD_PROC_SYMBOL(public_6370920);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_637f410);
CLANG_FORWARD_PROC_SYMBOL(public_63812e0);

#define public_636fd78 _public_636fd78
#define public_636fd95 _public_636fd95
#define public_636fda3 _public_636fda3
#define public_636fdd7 _public_636fdd7
#define public_636fdf8 _public_636fdf8
#define public_636fdfc _public_636fdfc
#define public_636fe2a _public_636fe2a
#define public_636fe32 _public_636fe32
#define public_636fe71 _public_636fe71
#define public_636feee _public_636feee
#define public_636ff16 _public_636ff16
#define public_636ff19 _public_636ff19
#define public_636ff38 _public_636ff38
#define public_636ff5f _public_636ff5f
#define public_636ff92 _public_636ff92
#define public_636ffc6 _public_636ffc6
#define public_636fffe _public_636fffe
#define public_6370023 _public_6370023
#define public_637003c _public_637003c
#define public_6370045 _public_6370045
#define public_6370048 _public_6370048

PROC_DECLARE(0x636fd10, internal_636fd10, public_636fd10);
extern "C" NAKED register_t __cdecl internal_636fd10()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ds : [public_658b24c]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x34]
        mov ecx, dword ptr ds : [eax+ebp*4+4]
        push ecx
        push 1
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        mov dword ptr ss : [esp+0x24], 0
        call public_636f780
        mov ebx, eax
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x14
        cmp eax, 4
        mov dword ptr ss : [esp+0x1C], ebx
        jl public_636fd78
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push ebx
        push ebp
        push eax
/*FIXUP push offset public_63ef2ac @0x636fd69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef2ac
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        public_636fd78 : nop
        mov esi, dword ptr ds : [public_658bc68]
        mov ecx, dword ptr ds : [public_658b8f8]
        inc esi
        mov eax, ebx
        inc ebx
        mov dword ptr ds : [public_658bc68], esi
        mov esi, dword ptr ds : [ecx+ebx*4]
        test esi, esi
        je public_636fdf8
        public_636fd95 : nop
        cmp esi, edi
        jne public_636fda3
        mov dword ptr ss : [esp+0x10], 1
        jmp public_636fdd7
        public_636fda3 : nop
        mov ecx, dword ptr ds : [public_658bc80]
        inc ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ds : [public_658bc80], ecx
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [edi+0x34]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        push ebp
        push edx
        push 1
        call public_63702f0
        add esp, 0x18
        test eax, eax
        jne public_636fe32
        mov ecx, dword ptr ds : [public_658b8f8]
        public_636fdd7 : nop
        mov esi, dword ptr ss : [esp+0x24]
        xor eax, eax
        cmp ebx, esi
        setge al
        dec eax
        and eax, ebx
        mov esi, dword ptr ds : [ecx+eax*4+4]
        test esi, esi
        lea ebx, ds:[eax+1]
        jne public_636fd95
        mov edx, dword ptr ss : [esp+0x10]
        test edx, edx
        jne public_636fdfc
        public_636fdf8 : nop
        mov dword ptr ds : [ecx+eax*4+4], edi
        public_636fdfc : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc dword ptr ds : [eax]
        cmp dword ptr ds : [public_658b078], 4
        jl public_636fe2a
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ebp
        push ecx
/*FIXUP push offset public_63ef274 @0x636fe1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef274
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_636fe2a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_636fe32 : nop
        mov ecx, dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [ecx+ebp*4+4]
        mov eax, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp edx, dword ptr ds : [eax+ecx*4+4]
        jne public_636fe71
/*FIXUP push offset public_63ef250 @0x636fe46*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef250
        call public_637f410
        mov edx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [esi+0x4C]
        add esp, 4
        push edx
        push eax
/*FIXUP push offset public_63ef1f4 @0x636fe5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef1f4
        call public_6356960
        push edi
        push esi
        push 3
        call public_637e2e0
        add esp, 0x18
        public_636fe71 : nop
        mov ebx, dword ptr ds : [esi+0x50]
        mov ecx, dword ptr ds : [edi+0x50]
        mov eax, dword ptr ds : [esi+0x3C]
        xor ecx, ebx
        mov ebx, dword ptr ss : [esp+0x14]
        shr ecx, 0xB
        xor edx, edx
        and ecx, 1
        cmp ebx, ecx
        sete dl
        mov ecx, edx
        test ecx, ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [eax+edx*4+4]
        lea eax, ds:[eax+edx*4+4]
        mov dword ptr ss : [esp+0x10], ecx
        je public_636feee
        test ebx, ebx
        jne public_636feee
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [eax+ebp*4+4], esi
        mov eax, dword ptr ss : [esp+0x28]
        dec dword ptr ds : [eax]
        cmp dword ptr ds : [public_658b078], 4
        jl public_636fe2a
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x4C]
        push ebp
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push eax
/*FIXUP push offset public_63ef1b8 @0x636fed7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef1b8
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_636feee : nop
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        jne public_636ff38
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_636ff38
/*FIXUP push offset public_63ef190 @0x636ff00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef190
        call public_637f410
        add esp, 4
        test ebx, ebx
        je public_636ff16
        mov eax, dword ptr ds : [ebx+0x4C]
        jmp public_636ff19
        public_636ff16 : nop
        or eax, 0xFFFFFFFF
        public_636ff19 : nop
        mov edx, dword ptr ds : [edi+0x4C]
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63ef120 @0x636ff22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef120
        call public_6356960
        push edi
        push esi
        push 3
        call public_637e2e0
        add esp, 0x1C
        public_636ff38 : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [ecx+ebp*4+4], 1
        mov ecx, dword ptr ds : [edi+0x50]
        mov eax, dword ptr ds : [edi+0x18]
        or ecx, 0x100000
        test eax, eax
        mov dword ptr ds : [edi+0x50], ecx
        jne public_636ff5f
        push edi
        call public_63812e0
        add esp, 4
        public_636ff5f : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [public_658b8f8]
        push edx
        push eax
        push ecx
        push edi
        call public_6370920
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        inc ecx
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_636ff92
        push esi
        call public_63812e0
        add esp, 4
        public_636ff92 : nop
        cmp ebx, 1
        je public_6370023
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edx+eax*4+4], 1
        mov ecx, dword ptr ds : [esi+0x50]
        mov eax, dword ptr ds : [esi+0x18]
        or ecx, 0x100000
        test eax, eax
        mov dword ptr ds : [esi+0x50], ecx
        jne public_636ffc6
        push esi
        call public_63812e0
        add esp, 4
        public_636ffc6 : nop
        test ebx, ebx
        je public_6370023
        mov ecx, dword ptr ds : [ebx+0x3C]
        push esi
        push ecx
        call public_636e800
        mov edx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [edx+eax*4+4], 1
        mov ecx, dword ptr ds : [ebx+0x50]
        mov eax, dword ptr ds : [ebx+0x18]
        or ecx, 0x100000
        add esp, 8
        test eax, eax
        mov dword ptr ds : [ebx+0x50], ecx
        jne public_636fffe
        push ebx
        call public_63812e0
        add esp, 4
        public_636fffe : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [public_658b8f8]
        push eax
        push ecx
        push edx
        push ebx
        call public_6370920
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        add esp, 0x10
        add ecx, 2
        mov dword ptr ds : [eax], ecx
        public_6370023 : nop
        cmp dword ptr ds : [public_658b078], 4
        jl public_636fe2a
        cmp ebx, 1
        jne public_637003c
        mov ebx, 0xFFFFFFFE
        jmp public_6370048
        public_637003c : nop
        test ebx, ebx
        je public_6370045
        mov ebx, dword ptr ds : [ebx+0x4C]
        jmp public_6370048
        public_6370045 : nop
        or ebx, 0xFFFFFFFF
        public_6370048 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        push ecx
        mov ecx, dword ptr ds : [edi+0x4C]
        push ebx
        push edx
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push ebp
        push ecx
/*FIXUP push offset public_63ef0b8 @0x6370067*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ef0b8
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x636fd10)
    }
}

#undef public_636fd78
#undef public_636fd95
#undef public_636fda3
#undef public_636fdd7
#undef public_636fdf8
#undef public_636fdfc
#undef public_636fe2a
#undef public_636fe32
#undef public_636fe71
#undef public_636feee
#undef public_636ff16
#undef public_636ff19
#undef public_636ff38
#undef public_636ff5f
#undef public_636ff92
#undef public_636ffc6
#undef public_636fffe
#undef public_6370023
#undef public_637003c
#undef public_6370045
#undef public_6370048
