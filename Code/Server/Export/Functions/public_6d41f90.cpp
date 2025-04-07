#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e40);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d41fcf _public_6d41fcf
#define public_6d41fd4 _public_6d41fd4
#define public_6d41fdc _public_6d41fdc
#define public_6d41fe1 _public_6d41fe1
#define public_6d41fed _public_6d41fed
#define public_6d42010 _public_6d42010
#define public_6d42024 _public_6d42024
#define public_6d42080 _public_6d42080
#define public_6d420c1 _public_6d420c1
#define public_6d420ce _public_6d420ce
#define public_6d420e3 _public_6d420e3
#define public_6d420f2 _public_6d420f2
#define public_6d42100 _public_6d42100
#define public_6d4210b _public_6d4210b

PROC_DECLARE(0x6d41f90, internal_6d41f90, public_6d41f90);
extern "C" NAKED register_t __cdecl internal_6d41f90()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 2
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0x14], ebp
        jae public_6d42080
        test edx, edx
        je public_6d41fcf
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_6d41fd4
        public_6d41fcf : nop
        mov ecx, 1
        public_6d41fd4 : nop
        test edx, edx
        jne public_6d41fdc
        xor eax, eax
        jmp public_6d41fe1
        public_6d41fdc : nop
        sub eax, edx
        sar eax, 2
        public_6d41fe1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6d41fed
        xor eax, eax
        public_6d41fed : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6d60012
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_6d42024
        lea ebx, ds:[ebx]
        public_6d42010 : nop
        push ebx
        push ebp
        call public_6d06720
        add ebx, 4
        add esp, 8
        add ebp, 4
        cmp ebx, edi
        jne public_6d42010
        public_6d42024 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        push ebp
        call public_6d06720
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 4
        push ebp
        push ecx
        push edi
        mov ecx, esi
        call public_6d23e40
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x20]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6d31890
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ds:[edi+eax*4+4]
        mov dword ptr ds : [esi+4], edi
        mov eax, edi
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        public_6d42080 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_6d420ce
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_6d23e40
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6d3f0f0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6d4210b
        public_6d420c1 : nop
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6d420c1
        jmp public_6d4210b
        public_6d420ce : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_6d23e40
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_6d420f2
        public_6d420e3 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_6d420e3
        public_6d420f2 : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_6d4210b
        mov ecx, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_6d42100 : nop
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_6d42100
        public_6d4210b : nop
        add dword ptr ds : [esi+8], 4
        mov eax, dword ptr ds : [esi+4]
        pop edi
        pop esi
        lea eax, ds:[eax+ebp*4]
        pop ebp
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d41f90)
    }
}

#undef public_6d41fcf
#undef public_6d41fd4
#undef public_6d41fdc
#undef public_6d41fe1
#undef public_6d41fed
#undef public_6d42010
#undef public_6d42024
#undef public_6d42080
#undef public_6d420c1
#undef public_6d420ce
#undef public_6d420e3
#undef public_6d420f2
#undef public_6d42100
#undef public_6d4210b
