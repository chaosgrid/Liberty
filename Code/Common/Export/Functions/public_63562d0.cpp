#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63463f0);
CLANG_FORWARD_PROC_SYMBOL(public_63562d0);
CLANG_FORWARD_PROC_SYMBOL(public_6358bb0);

#define public_63562f7 _public_63562f7
#define public_6356305 _public_6356305
#define public_6356311 _public_6356311
#define public_6356347 _public_6356347
#define public_6356390 _public_6356390
#define public_635639c _public_635639c
#define public_63563a9 _public_63563a9

PROC_DECLARE(0x63562d0, internal_63562d0, public_63562d0);
extern "C" NAKED register_t __cdecl internal_63562d0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        lea eax, ss:[esp+0x18]
        mov ebx, ecx
        push eax
        call public_6358bb0
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jne public_63562f7
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx+8]
        test eax, eax
        je public_6356305
        public_63562f7 : nop
        mov eax, dword ptr ds : [ebx+0x34]
        and eax, 0xFFFFFF01
        or eax, 1
        mov dword ptr ds : [ebx+0x34], eax
        public_6356305 : nop
        lea ecx, ss:[esp+0x10]
        lea eax, ds:[ebx+0x10]
        mov edx, 2
        public_6356311 : nop
        mov esi, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi+0x98]
        mov dword ptr ds : [ecx], esi
        add eax, 0x14
        add ecx, 4
        dec edx
        jne public_6356311
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        test al, 0xC
        jne public_635639c
        test ah, 3
        jne public_635639c
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        test al, 0xC
        jne public_6356390
        test ah, 3
        jne public_6356390
        push edi
        xor esi, esi
        xor edi, edi
        public_6356347 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        lea ecx, ds:[esi+eax+0x98]
        push ecx
        mov ecx, dword ptr ss : [esp+edi+0x18]
        call public_63463f0
        fstp dword ptr ss : [esp+edi+0xC]
        add esi, 0x10
        add edi, 4
        cmp esi, 0x20
        jl public_6356347
        fld dword ptr ss : [esp+0x10]
        pop edi
        fmul dword ptr ss : [esp+8]
        pop esi
        fld dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+4]
        fdivp 
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ds : [ebx+0x30]
        pop ebx
        fstp st(0)
        add esp, 0x18
        ret 
        public_6356390 : nop
        mov edx, dword ptr ds : [ebx+0x40]
        add edx, 0x98
        push edx
        jmp public_63563a9
        public_635639c : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov ecx, dword ptr ss : [esp+0x14]
        add eax, 0xA8
        push eax
        public_63563a9 : nop
        call public_63463f0
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        pop esi
        fstp dword ptr ds : [ebx+0x30]
        pop ebx
        fstp st(0)
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x63562d0)
    }
}

#undef public_63562f7
#undef public_6356305
#undef public_6356311
#undef public_6356347
#undef public_6356390
#undef public_635639c
#undef public_63563a9
