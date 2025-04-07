#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b140);
CLANG_FORWARD_PROC_SYMBOL(public_634cfe0);
CLANG_FORWARD_PROC_SYMBOL(public_6355200);

#define public_63552a3 _public_63552a3
#define public_63552b9 _public_63552b9
#define public_63552c6 _public_63552c6
#define public_63552d4 _public_63552d4
#define public_63552dd _public_63552dd
#define public_63552ea _public_63552ea
#define public_63552fe _public_63552fe

PROC_DECLARE(0x6355200, internal_6355200, public_6355200);
extern "C" NAKED register_t __cdecl internal_6355200()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [esi+0x18]
        and eax, 0xFFFFFFF0
        mov ebx, dword ptr ds : [eax]
        and ebx, 0xFFF
        inc ebx
        shl ebx, 4
        sub eax, ebx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [ecx]
        and eax, 0xFFFFFFF0
        mov ebx, dword ptr ds : [eax]
        and ebx, 0xFFF
        inc ebx
        shl ebx, 4
        sub eax, ebx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [esi+0x2C]
        mov ebx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x58], ecx
        lea edx, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebp
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], esi
        call public_634cfe0
        mov eax, dword ptr ds : [ebx+0x78]
        test ah, 0x20
        je public_63552a3
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [edi+0xC]
        push ebx
        call public_634b140
        public_63552a3 : nop
        mov eax, dword ptr ss : [ebp+0x78]
        test ah, 0x20
        je public_63552b9
        mov ecx, dword ptr ds : [edi+0xC]
        lea edx, ss:[esp+0x10]
        push edx
        push ebp
        call public_634b140
        public_63552b9 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_63552c6
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_63552c6 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_63552d4
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        jmp public_63552dd
        public_63552d4 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+0x28], ecx
        public_63552dd : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_63552ea
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+4], edx
        public_63552ea : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_63552fe
        mov ecx, dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 0x5C
        ret 
        public_63552fe : nop
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0x28], eax
        pop ebx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x6355200)
    }
}

#undef public_63552a3
#undef public_63552b9
#undef public_63552c6
#undef public_63552d4
#undef public_63552dd
#undef public_63552ea
#undef public_63552fe
