#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6353840);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_63538a0 _public_63538a0
#define public_63538cc _public_63538cc
#define public_63538f5 _public_63538f5
#define public_635390b _public_635390b
#define public_6353917 _public_6353917

PROC_DECLARE(0x6353840, internal_6353840, public_6353840);
extern "C" NAKED register_t __cdecl internal_6353840()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, esi
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        push edi
        movsx edi, word ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp+8], eax
        mov eax, edi
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_6391dc0
        mov ecx, edi
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        mov ebx, esp
        mov edi, ebx
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov ecx, dword ptr ss : [ebp+8]
        and esi, 0xFFFFFFF0
        mov eax, dword ptr ds : [esi]
        shr eax, 0xC
        and eax, 0xFFF
        shl eax, 4
        lea esi, ds:[eax+ecx+0x14]
        public_63538a0 : nop
        mov edx, esi
        and edx, 0xFFFFFFF0
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[ebp-0x10]
        push ecx
        and eax, 0xFFF
        push edx
        mov byte ptr ds : [eax+ebx], 1
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        call public_635b210
        add esp, 0x10
        mov ecx, esi
        xor edx, edx
        lea edi, ss:[ebp-0x10]
        public_63538cc : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_63538f5
        mov eax, dword ptr ds : [ecx]
        shl eax, 1
        sar eax, 0x11
        lea eax, ds:[ecx+eax*4]
        and eax, 0xFFFFFFF0
        mov eax, dword ptr ds : [eax]
        and eax, 0xFFF
        cmp byte ptr ds : [eax+ebx], 0
        je public_635390b
        public_63538f5 : nop
        mov eax, ecx
        and eax, 0xC
        add ecx, dword ptr ds : [eax+public_63ee4e0]
        inc edx
        add edi, 4
        cmp edx, 3
        jge public_6353917
        jmp public_63538cc
        public_635390b : nop
        mov edx, dword ptr ds : [ecx]
        shl edx, 1
        sar edx, 0x11
        lea esi, ds:[ecx+edx*4]
        jmp public_63538a0
        public_6353917 : nop
        lea esp, ss:[ebp-0x1C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6353840)
    }
}

#undef public_63538a0
#undef public_63538cc
#undef public_63538f5
#undef public_635390b
#undef public_6353917
