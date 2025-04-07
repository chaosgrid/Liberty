#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4580);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f52c5 _public_65f52c5
#define public_65f52e2 _public_65f52e2
#define public_65f52f2 _public_65f52f2
#define public_65f5314 _public_65f5314
#define public_65f5317 _public_65f5317
#define public_65f53b8 _public_65f53b8
#define public_65f53ef _public_65f53ef

PROC_DECLARE(0x65f52b0, internal_65f52b0, public_65f52b0);
extern "C" NAKED register_t __cdecl internal_65f52b0()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_65f53ef
        public_65f52c5 : nop
        cmp byte ptr ds : [esi], 0
        jne public_65f52e2
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        test eax, eax
        jne public_65f52f2
        public_65f52e2 : nop
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_65f52c5
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 0x10
        public_65f52f2 : nop
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ss : [esp+0x5C]
        lea edx, ss:[esp+0x5C]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x60]
        test eax, eax
        je public_65f5314
        fld dword ptr ss : [esp+0x5C]
        jmp public_65f5317
        public_65f5314 : nop
        fld dword ptr ss : [ebp+0x24]
        public_65f5317 : nop
        fld dword ptr ds : [ebx+0x24]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [ebp+0x20]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [ebx+0x20]
        mov dword ptr ds : [ebx+0x24], eax
        fpatan 
        mov dword ptr ds : [ebx+0x28], ecx
        mov dword ptr ds : [ebx+0x2C], edx
        fmul dword ptr ds : [public_6601328]
        fld st(0)
        fsin 
        fld qword ptr ds : [public_6601320]
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x54]
        fcos 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [public_6601318]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        push ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_65f4580
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x28], ecx
        jne public_65f53b8
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f53b8 : nop
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        mov edi, ebx
        rep movsd
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        pop edi
        je public_65f53ef
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+8]
        public_65f53ef : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x44
        ret 0x10
        UNREACHABLE_TRAP(0x65f52b0)
    }
}

#undef public_65f52c5
#undef public_65f52e2
#undef public_65f52f2
#undef public_65f5314
#undef public_65f5317
#undef public_65f53b8
#undef public_65f53ef
