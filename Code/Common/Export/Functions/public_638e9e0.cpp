#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e460);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637e2e0);
CLANG_FORWARD_PROC_SYMBOL(public_638d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_638d9f0);
CLANG_FORWARD_PROC_SYMBOL(public_638e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_638fae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cb0);

#define public_638ea0f _public_638ea0f
#define public_638ea56 _public_638ea56
#define public_638ea6d _public_638ea6d
#define public_638ea92 _public_638ea92
#define public_638ea9d _public_638ea9d
#define public_638eaaf _public_638eaaf
#define public_638ead0 _public_638ead0
#define public_638eaee _public_638eaee
#define public_638eb2f _public_638eb2f
#define public_638eb4e _public_638eb4e
#define public_638eb9b _public_638eb9b
#define public_638ebb4 _public_638ebb4
#define public_638ebbd _public_638ebbd
#define public_638ebc6 _public_638ebc6
#define public_638ec1a _public_638ec1a
#define public_638ec82 _public_638ec82
#define public_638eca4 _public_638eca4

PROC_DECLARE(0x638e9e0, internal_638e9e0, public_638e9e0);
extern "C" NAKED register_t __cdecl internal_638e9e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x20
        mov eax, dword ptr ds : [public_658b8f4]
        push ebx
        push ebp
        push esi
        push edi
        xor esi, esi
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call public_636e460
        add esp, 4
        test eax, eax
        je public_638eca4
        mov ebp, dword ptr ds : [public_63991e8]
        public_638ea0f : nop
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ds : [eax+0x10]
        push 0x18
        push eax
        call public_6377fe0
        mov eax, dword ptr ds : [esi+0x50]
        add esp, 8
        test ah, 4
        jne public_638ec82
        and eax, 0x9FFFFFFF
        mov dword ptr ds : [esi+0x50], eax
        mov ecx, dword ptr ds : [public_658b218]
        mov eax, dword ptr ds : [public_658bf58]
        dec ecx
        cmp ecx, eax
        jne public_638ea56
        mov eax, dword ptr ds : [public_658b200]
        mov dword ptr ds : [public_658b078], eax
        mov dword ptr ds : [public_658b998], eax
        public_638ea56 : nop
        cmp ebx, 7
        jne public_638eaee
        inc dword ptr ds : [public_658bd98]
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 4
        je public_638ea9d
        public_638ea6d : nop
        mov eax, dword ptr ds : [edi+0x20]
        test eax, eax
        jne public_638ea92
        mov edx, dword ptr ds : [edi+0x4C]
        mov eax, dword ptr ds : [esi+0x4C]
        push edx
        push eax
/*FIXUP push offset public_63faa58 @0x638ea7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63faa58
        call public_6356960
        push edi
        push esi
        push 5
        call public_637e2e0
        add esp, 0x18
        public_638ea92 : nop
        mov edi, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [edi+0x50]
        test ah, 4
        jne public_638ea6d
        public_638ea9d : nop
        cmp esi, edi
        jne public_638eaaf
        push esi
        call public_638d2c0
        add esp, 4
        jmp public_638ec82
        public_638eaaf : nop
        cmp dword ptr ds : [public_658b078], 2
        jl public_638ead0
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        push ecx
        push edx
/*FIXUP push offset public_63faa14 @0x638eac5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63faa14
        push eax
        call ebp
        add esp, 0x10
        public_638ead0 : nop
        push 0
        push 0
        push 0
        push edi
        push esi
        call public_638fae0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        jmp public_638ec82
        public_638eaee : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        push ecx
        call public_636ec10
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne public_638ebc6
        mov ecx, dword ptr ds : [public_658bb30]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, 2
        mov dword ptr ds : [public_658bb30], ecx
        jl public_638eb2f
        mov edx, dword ptr ds : [esi+0x4C]
        mov eax, dword ptr ds : [public_658b7fc]
        push edx
/*FIXUP push offset public_63fa9d4 @0x638eb24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa9d4
        push eax
        call ebp
        add esp, 0xC
        public_638eb2f : nop
        push 0
        push esi
        call public_6391cb0
        mov eax, dword ptr ds : [esi+0x34]
        add esp, 8
        test eax, eax
        je public_638ebbd
        mov edi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test edi, edi
        je public_638ebbd
        public_638eb4e : nop
        mov ecx, dword ptr ds : [edi+0xC]
        push esi
        push ecx
        call public_636e400
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edx+4]
        add esp, 8
        test eax, eax
        jne public_638ebb4
        mov ecx, dword ptr ds : [public_658bb28]
        mov eax, dword ptr ds : [public_658b078]
        inc ecx
        cmp eax, 2
        mov dword ptr ds : [public_658bb28], ecx
        jl public_638eb9b
        mov eax, dword ptr ds : [esi+0x4C]
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [public_658b7fc]
        push eax
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63fa990 @0x638eb90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa990
        push edx
        call ebp
        add esp, 0x10
        public_638eb9b : nop
        mov eax, dword ptr ds : [edi+0x14]
        or eax, 0x8000000
        push edi
/*FIXUP push offset public_658b900 @0x638eba4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [edi+0x14], eax
        call public_636e1b0
        add esp, 8
        public_638ebb4 : nop
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_638eb4e
        public_638ebbd : nop
        inc dword ptr ss : [esp+0x14]
        jmp public_638ec82
        public_638ebc6 : nop
        cmp ebx, dword ptr ds : [public_658b24c]
        jge public_638ec82
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        call public_638d9f0
        mov edi, eax
        mov eax, dword ptr ds : [public_658b078]
        add esp, 0x10
        cmp eax, 2
        jl public_638ec1a
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi+0x4C]
        push eax
        mov eax, dword ptr ds : [esi+0x4C]
        push ecx
        mov ecx, dword ptr ds : [public_658b7fc]
        push edx
        push ebx
        push eax
/*FIXUP push offset public_63fa940 @0x638ec0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa940
        push ecx
        call ebp
        add esp, 0x1C
        public_638ec1a : nop
        push 0
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        push edi
        push esi
        call public_638fae0
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_658b190]
        add esp, 0x14
        inc ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_638ec82
        fld qword ptr ds : [public_658bb20]
        mov eax, dword ptr ds : [public_658bb10]
        fadd qword ptr ss : [esp+0x18]
        inc eax
        mov dword ptr ds : [public_658bb10], eax
        fstp qword ptr ds : [public_658bb20]
        fld qword ptr ds : [public_658bb18]
        fcomp qword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 1
        je public_638ec82
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [public_658bb18], ecx
        mov dword ptr ds : [public_658bb1c], edx
        public_638ec82 : nop
        mov eax, dword ptr ds : [public_658b8f4]
        push eax
        call public_636e460
        add esp, 4
        test eax, eax
        jne public_638ea0f
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        public_638eca4 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x638e9e0)
    }
}

#undef public_638ea0f
#undef public_638ea56
#undef public_638ea6d
#undef public_638ea92
#undef public_638ea9d
#undef public_638eaaf
#undef public_638ead0
#undef public_638eaee
#undef public_638eb2f
#undef public_638eb4e
#undef public_638eb9b
#undef public_638ebb4
#undef public_638ebbd
#undef public_638ebc6
#undef public_638ec1a
#undef public_638ec82
#undef public_638eca4
