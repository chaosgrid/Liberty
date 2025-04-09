#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c540);
CLANG_FORWARD_PROC_SYMBOL(public_4482b0);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_4c3f00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9a09);

#define public_448320 _public_448320
#define public_448340 _public_448340
#define public_448365 _public_448365
#define public_4483af _public_4483af
#define public_4483bc _public_4483bc
#define public_4483cb _public_4483cb
#define public_448402 _public_448402
#define public_448406 _public_448406
#define public_448440 _public_448440
#define public_4484d9 _public_4484d9
#define public_4484dd _public_4484dd
#define public_4484eb _public_4484eb

PROC_DECLARE(0x4482b0, internal_4482b0, public_4482b0);
extern "C" NAKED register_t __cdecl internal_4482b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9a09 @0x4482b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9a09
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        push edi
        call public_4c3e10
        push eax
        call dword ptr ds : [public_5c61fc]
        mov ebx, eax
        mov dword ptr ss : [esp+0x2C], ebx
        call public_4c3f00
        mov esi, dword ptr ds : [eax+4]
        mov edi, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x70]
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [public_5c6224]
        add esp, 0x10
        cmp edi, esi
        mov ebp, edi
        je public_4483cb
        mov ecx, dword ptr ss : [esp+0x14]
        public_448320 : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_4483bc
        xor edi, edi
        test ecx, ecx
        jle public_4483bc
        mov edi, edi
        public_448340 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        jne public_448365
        mov esi, offset public_5c865c
        public_448365 : nop
        xor eax, eax
        mov ax, word ptr ss : [ebp+8]
        mov ecx, ebx
        push eax
        call dword ptr ds : [public_5c6220]
        test esi, esi
        je public_4483af
        test eax, eax
        je public_4483af
        mov eax, dword ptr ds : [eax+8]
        push eax
        push esi
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_4483af
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+edi*4]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x60]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+edi*4], 0xFFFFFFFF
        public_4483af : nop
        mov ecx, dword ptr ss : [esp+0x14]
        inc edi
        cmp edi, ecx
        jl public_448340
        mov esi, dword ptr ss : [esp+0x18]
        public_4483bc : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, esi
        jne public_448320
        mov edi, dword ptr ss : [esp+0x1C]
        public_4483cb : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c61b0]
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x68], 0
        call dword ptr ds : [public_5c61c8]
        cmp dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x6C], edi
        je public_4484eb
        mov ebp, dword ptr ds : [public_5c6d14]
        jmp public_448406
        public_448402 : nop
        mov edi, dword ptr ss : [esp+0x6C]
        public_448406 : nop
        fld dword ptr ds : [edi+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_4484dd
        xor ecx, ecx
        mov cx, word ptr ds : [edi+8]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c6220]
        mov eax, dword ptr ds : [eax+0x44]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_4484d9
        lea ebx, ds:[ebx]
        public_448440 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [esi+8]
        push eax
        call dword ptr ds : [public_5c621c]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [public_5c6dd8]
        push 0
        push 0
        add eax, 0x20
        push eax
        mov eax, dword ptr ds : [edx]
        push 0
        push 0
        push eax
        push ecx
        call public_41c540
/*FIXUP push offset public_5cbe64 @0x44846e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbe64
        mov ebx, eax
        mov dword ptr ss : [esp+0x50], offset public_5cbe64
        call ebp
        push edi
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x5C], edi
        call ebp
        mov ecx, dword ptr ds : [public_5c6d5c]
        add esp, 0x28
        mov dword ptr ss : [esp+0x38], eax
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        push edi
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_5c6204]
        push eax
        mov eax, dword ptr ds : [public_5c6d5c]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        call dword ptr ds : [eax+0x18]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_448440
        mov edi, dword ptr ss : [esp+0x6C]
        mov ebx, dword ptr ss : [esp+0x28]
        public_4484d9 : nop
        mov esi, dword ptr ss : [esp+0x18]
        public_4484dd : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, esi
        mov dword ptr ss : [esp+0x6C], edi
        jne public_448402
        public_4484eb : nop
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c61bc]
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call dword ptr ds : [public_5c61b4]
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x4482b0)
    }
}

#undef public_448320
#undef public_448340
#undef public_448365
#undef public_4483af
#undef public_4483bc
#undef public_4483cb
#undef public_448402
#undef public_448406
#undef public_448440
#undef public_4484d9
#undef public_4484dd
#undef public_4484eb
