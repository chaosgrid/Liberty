#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6f00);
CLANG_FORWARD_PROC_SYMBOL(public_5361e0);
CLANG_FORWARD_PROC_SYMBOL(public_5366a0);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c09a5);

#define public_5362d7 _public_5362d7
#define public_5362e0 _public_5362e0
#define public_5362ed _public_5362ed
#define public_5362fc _public_5362fc
#define public_53630a _public_53630a
#define public_536311 _public_536311
#define public_53631e _public_53631e
#define public_53632d _public_53632d
#define public_53633b _public_53633b
#define public_536362 _public_536362
#define public_5363f7 _public_5363f7
#define public_536415 _public_536415

PROC_DECLARE(0x5361e0, internal_5361e0, public_5361e0);
extern "C" NAKED register_t __cdecl internal_5361e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c09a5 @0x5361e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c09a5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push 0x28
        call dword ptr ds : [public_5c69b8]
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_536415
        mov dword ptr ds : [esi+4], ebx
        mov eax, dword ptr ds : [public_5c69b4]
        push ebp
        push edi
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+8], eax
        mov edi, dword ptr ds : [edx]
        lea ebp, ds:[esi+0x10]
        mov ecx, ebp
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, 0xBF800000
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ecx
        mov dword ptr ds : [esi+0x24], ecx
        mov dword ptr ds : [esi], offset public_5de584
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [eax+0x18]
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x30], edx
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x34], eax
        fild dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+8]
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x30]
        fmulp 
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [esi+0x1C]
        fld dword ptr ds : [eax+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53633b
        call public_54baf0
        mov edi, eax
        cmp edi, ebx
        je public_5362d7
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ebx, eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        cmp eax, ebx
        je public_5362d7
        push edi
        mov ecx, esi
        call public_5366a0
        public_5362d7 : nop
        xor edi, edi
        mov ebx, 0xA
        mov edi, edi
        public_5362e0 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x30], ebx
        je public_5362ed
        mov edi, dword ptr ds : [edi+0x14]
        jmp public_5362fc
        public_5362ed : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        call public_540fc0
        add esp, 4
        mov edi, eax
        public_5362fc : nop
        test edi, edi
        je public_53630a
        push edi
        mov ecx, esi
        call public_5366a0
        jmp public_5362e0
        public_53630a : nop
        xor edi, edi
        mov ebx, 9
        public_536311 : nop
        test edi, edi
        mov dword ptr ss : [esp+0x34], ebx
        je public_53631e
        mov edi, dword ptr ds : [edi+0x14]
        jmp public_53632d
        public_53631e : nop
        lea edx, ss:[esp+0x34]
        push edx
        call public_540fc0
        add esp, 4
        mov edi, eax
        public_53632d : nop
        test edi, edi
        je public_53633b
        push edi
        mov ecx, esi
        call public_5366a0
        jmp public_536311
        public_53633b : nop
        mov ecx, dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_536362
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_5363f7
        public_536362 : nop
        call public_54baf0
        mov edi, eax
        test edi, edi
        je public_5363f7
        mov eax, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [esi+0xC]
        mov ecx, edi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x38], eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0x38]
        cmp ecx, eax
        je public_5363f7
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x2C]
        fld dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [esi+8]
        fadd dword ptr ds : [edx+4]
        fld dword ptr ss : [ebp]
        fsub dword ptr ss : [esp+0x14]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [esp+0x1C]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(4)
        fmul st, st(5)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_5363f7
        mov ecx, dword ptr ds : [public_674a10]
        test ecx, ecx
        je public_5363f7
        mov eax, dword ptr ds : [edx+4]
        push eax
        push ebp
        call public_4d6f00
        public_5363f7 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+4]
        pop edi
        pop ebp
        mov eax, esi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_536415 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop esi
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5361e0)
    }
}

#undef public_5362d7
#undef public_5362e0
#undef public_5362ed
#undef public_5362fc
#undef public_53630a
#undef public_536311
#undef public_53631e
#undef public_53632d
#undef public_53633b
#undef public_536362
#undef public_5363f7
#undef public_536415
