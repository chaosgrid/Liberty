#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4570a0);

#define public_457308 _public_457308
#define public_457326 _public_457326
#define public_45732f _public_45732f
#define public_457360 _public_457360
#define public_457373 _public_457373

PROC_DECLARE(0x4572e0, internal_4572e0, public_4572e0);
extern "C" NAKED register_t __cdecl internal_4572e0()
{
    __asm
    {
        sub esp, 8
        push edi
        mov edi, ecx
        cmp byte ptr ds : [edi+0x74], 1
        jne public_457373
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ss : [esp+0xC], esi
        jle public_45732f
        mov ebx, dword ptr ss : [esp+0x18]
        public_457308 : nop
        mov ecx, dword ptr ds : [ebx+esi*4]
        test ecx, ecx
        je public_457326
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [edi+0x70]
        push edx
        call dword ptr ds : [eax+0x40]
        test al, al
        jne public_457360
        public_457326 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc esi
        cmp esi, eax
        jl public_457308
        public_45732f : nop
        mov ecx, dword ptr ds : [edi+0x5C]
        mov edx, dword ptr ds : [ecx+0xA4]
        mov ecx, dword ptr ds : [edi+0x6C]
        push edx
        mov edx, dword ptr ds : [edi+0x70]
        push ecx
        push edx
        push 0x123
/*FIXUP push offset public_5ce340 @0x457346*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce340
        mov eax, 0x100001
/*FIXUP push offset public_5ce380 @0x457350*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce380
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_457360 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        call public_4570a0
        pop esi
        pop ebx
        public_457373 : nop
        pop edi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x4572e0)
    }
}

#undef public_457308
#undef public_457326
#undef public_45732f
#undef public_457360
#undef public_457373
