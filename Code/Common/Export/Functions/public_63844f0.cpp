#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_63844f0);

#define public_6384511 _public_6384511
#define public_638451c _public_638451c
#define public_638453e _public_638453e
#define public_638455a _public_638455a
#define public_638455e _public_638455e
#define public_638456f _public_638456f
#define public_6384588 _public_6384588
#define public_6384592 _public_6384592
#define public_63845ab _public_63845ab
#define public_63845c8 _public_63845c8
#define public_63845cc _public_63845cc
#define public_63845d9 _public_63845d9
#define public_6384602 _public_6384602

PROC_DECLARE(0x63844f0, internal_63844f0, public_63844f0);
extern "C" NAKED register_t __cdecl internal_63844f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        xor esi, esi
        xor eax, eax
        test ebx, ebx
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], esi
        jle public_638451c
        public_6384511 : nop
        movsx edx, byte ptr ds : [eax+ebp]
        add ecx, edx
        inc eax
        cmp eax, ebx
        jl public_6384511
        public_638451c : nop
        mov eax, dword ptr ss : [esp+0x34]
        cmp ecx, eax
        je public_638453e
        push ecx
        push eax
/*FIXUP push offset public_63f73b4 @0x6384526*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f73b4
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        public_638453e : nop
        xor edx, edx
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], edx
        jle public_63845d9
        mov eax, dword ptr ss : [esp+0x30]
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        jmp public_638455e
        public_638455a : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_638455e : nop
        mov al, byte ptr ds : [edx+ebp]
        cmp al, 0xFF
        jne public_638456f
        inc esi
        mov dword ptr ss : [esp+0x10], esi
        add ebx, 8
        jmp public_63845c8
        public_638456f : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebp, ecx
        add ebp, 8
        cmp al, 1
        mov dword ptr ss : [esp+0x24], ebp
        jne public_6384588
        cmp esi, edi
        jge public_63845cc
        mov eax, ebx
        jmp public_6384592
        public_6384588 : nop
        inc esi
        mov eax, ebx
        mov dword ptr ss : [esp+0x10], esi
        add ebx, 8
        public_6384592 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        test ebp, ebp
        je public_63845c8
        mov edx, dword ptr ss : [esp+0x34]
        lea esi, ds:[edx*8]
        shl edi, 3
        lea edx, ss:[ebp]
        public_63845ab : nop
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebp
        add ecx, esi
        add eax, edi
        dec edx
        jne public_63845ab
        mov edi, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        public_63845c8 : nop
        cmp esi, edi
        jge public_63845d9
        public_63845cc : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc edx
        cmp edx, eax
        mov dword ptr ss : [esp+0x14], edx
        jl public_638455a
        public_63845d9 : nop
        cmp dword ptr ds : [public_658b078], 1
        jl public_6384602
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        push edi
        push ecx
/*FIXUP push offset public_63f7374 @0x63845f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7374
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x14
        public_6384602 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x63844f0)
    }
}

#undef public_6384511
#undef public_638451c
#undef public_638453e
#undef public_638455a
#undef public_638455e
#undef public_638456f
#undef public_6384588
#undef public_6384592
#undef public_63845ab
#undef public_63845c8
#undef public_63845cc
#undef public_63845d9
#undef public_6384602
