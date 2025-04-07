#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f302b0);

#define public_6f301e2 _public_6f301e2
#define public_6f301ea _public_6f301ea
#define public_6f30200 _public_6f30200
#define public_6f3020d _public_6f3020d
#define public_6f30215 _public_6f30215
#define public_6f30231 _public_6f30231
#define public_6f30264 _public_6f30264
#define public_6f30284 _public_6f30284

PROC_DECLARE(0x6f301d0, internal_6f301d0, public_6f301d0);
extern "C" NAKED register_t __cdecl internal_6f301d0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ds : [ecx+4]
        test ebp, ebp
        push esi
        push edi
        jne public_6f301e2
        xor edx, edx
        jmp public_6f301ea
        public_6f301e2 : nop
        mov edx, dword ptr ds : [ecx+8]
        sub edx, ebp
        sar edx, 4
        public_6f301ea : nop
        fld dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x24]
        xor esi, esi
        test edx, edx
        jle public_6f30215
        lea ebx, ss:[ebp+4]
        nop 
        lea esp, ss:[esp]
        public_6f30200 : nop
        fcom dword ptr ds : [ebx]
        fnstsw ax
        test ah, 1
        jne public_6f3020d
        cmp esi, edi
        jne public_6f30215
        public_6f3020d : nop
        inc esi
        add ebx, 0x10
        cmp esi, edx
        jl public_6f30200
        public_6f30215 : nop
        lea eax, ds:[edi+1]
        cmp esi, eax
        jne public_6f30231
        mov ecx, esi
        pop edi
        shl ecx, 4
        mov eax, esi
        fstp dword ptr ds : [ecx+ebp+4]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f30231 : nop
        shl edi, 4
        mov edx, dword ptr ds : [edi+ebp]
        lea eax, ds:[edi+ebp]
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], edx
        fld dword ptr ds : [eax+0xC]
        fld dword ptr ds : [eax+8]
        lea edx, ds:[eax+0x10]
        cmp edx, edi
        fstp dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x14]
        je public_6f30284
        lea eax, ds:[edx-8]
        public_6f30264 : nop
        mov ebx, dword ptr ds : [edx]
        mov dword ptr ds : [eax-8], ebx
        mov ebx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax-4], ebx
        mov ebx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [eax+4], ebx
        add edx, 0x10
        add eax, 0x10
        cmp edx, edi
        jne public_6f30264
        public_6f30284 : nop
        mov edi, dword ptr ds : [ecx+8]
        lea eax, ss:[esp+0x10]
        add edi, 0xFFFFFFF0
        push eax
        mov dword ptr ds : [ecx+8], edi
        call public_6f302b0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f301d0)
    }
}

#undef public_6f301e2
#undef public_6f301ea
#undef public_6f30200
#undef public_6f3020d
#undef public_6f30215
#undef public_6f30231
#undef public_6f30264
#undef public_6f30284
