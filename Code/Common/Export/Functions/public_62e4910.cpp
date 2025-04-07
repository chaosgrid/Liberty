#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e4910);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62e4942 _public_62e4942
#define public_62e499c _public_62e499c
#define public_62e49eb _public_62e49eb
#define public_62e4a3a _public_62e4a3a
#define public_62e4a89 _public_62e4a89
#define public_62e4ad8 _public_62e4ad8
#define public_62e4b27 _public_62e4b27
#define public_62e4b76 _public_62e4b76

PROC_DECLARE(0x62e4910, internal_62e4910, public_62e4910);
extern "C" NAKED register_t __cdecl internal_62e4910()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x18]
        jne public_62e4942
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e4942 : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ebp, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x34]
        mov eax, ebp
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_62e499c
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e499c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[ebp+0xC]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_62e49eb
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e49eb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [edi]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_62e4a3a
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e4a3a : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[ebp+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_62e4a89
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e4a89 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+0x30]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_62e4ad8
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e4ad8 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[ebp+0x3C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        fld dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_62e4b27
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e4b27 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+0x48]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x24]
        jne public_62e4b76
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e4b76 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        add ebp, 0x54
        mov dword ptr ss : [ebp], edx
        pop edi
        mov dword ptr ss : [ebp+4], eax
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62e4910)
    }
}

#undef public_62e4942
#undef public_62e499c
#undef public_62e49eb
#undef public_62e4a3a
#undef public_62e4a89
#undef public_62e4ad8
#undef public_62e4b27
#undef public_62e4b76
