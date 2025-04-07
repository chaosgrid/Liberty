#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f2f0);

#define public_6f2f220 _public_6f2f220
#define public_6f2f246 _public_6f2f246
#define public_6f2f254 _public_6f2f254
#define public_6f2f295 _public_6f2f295
#define public_6f2f29c _public_6f2f29c
#define public_6f2f2aa _public_6f2f2aa
#define public_6f2f2b1 _public_6f2f2b1
#define public_6f2f2da _public_6f2f2da

PROC_DECLARE(0x6f2f210, internal_6f2f210, public_6f2f210);
extern "C" NAKED register_t __cdecl internal_6f2f210()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edx]
        sub esp, 0x10
        cmp ecx, edx
        push esi
        push edi
        je public_6f2f246
        mov edi, edi
        public_6f2f220 : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        je public_6f2f254
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x44
        jnp public_6f2f2da
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_6f2f220
        public_6f2f246 : nop
        fld dword ptr ds : [public_6f5a1d4]
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        public_6f2f254 : nop
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, edx
        mov edi, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [eax+4]
        je public_6f2f246
        cmp ecx, edx
        je public_6f2f246
        cmp esi, edx
        fld dword ptr ss : [esp+0x1C]
        push ebx
        mov ebx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x10], ebx
        mov ebx, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0xC], ebx
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+8]
        pop ebx
        fsub dword ptr ds : [eax+8]
        fdivp 
        fstp dword ptr ss : [esp+0x14]
        jne public_6f2f295
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6f2f29c
        public_6f2f295 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        public_6f2f29c : nop
        cmp edi, edx
        jne public_6f2f2aa
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x1C], edx
        jmp public_6f2f2b1
        public_6f2f2aa : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x1C], eax
        public_6f2f2b1 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6f2f2f0
        add esp, 0x14
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        public_6f2f2da : nop
        fld dword ptr ds : [ecx+0xC]
        pop edi
        pop esi
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f2f210)
    }
}

#undef public_6f2f220
#undef public_6f2f246
#undef public_6f2f254
#undef public_6f2f295
#undef public_6f2f29c
#undef public_6f2f2aa
#undef public_6f2f2b1
#undef public_6f2f2da
