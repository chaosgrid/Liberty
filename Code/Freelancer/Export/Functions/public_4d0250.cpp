#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cf030);
CLANG_FORWARD_PROC_SYMBOL(public_4d0250);
CLANG_FORWARD_PROC_SYMBOL(public_4d4740);
CLANG_FORWARD_PROC_SYMBOL(public_4d48f0);
CLANG_FORWARD_PROC_SYMBOL(public_4d49b0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdd48);

#define public_4d02c3 _public_4d02c3
#define public_4d02c5 _public_4d02c5
#define public_4d02ed _public_4d02ed
#define public_4d0305 _public_4d0305
#define public_4d0324 _public_4d0324
#define public_4d0347 _public_4d0347
#define public_4d0388 _public_4d0388
#define public_4d03ae _public_4d03ae
#define public_4d03c8 _public_4d03c8
#define public_4d03db _public_4d03db
#define public_4d03f6 _public_4d03f6
#define public_4d0453 _public_4d0453
#define public_4d045b _public_4d045b

PROC_DECLARE(0x4d0250, internal_4d0250, public_4d0250);
extern "C" NAKED register_t __cdecl internal_4d0250()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bdd48 @0x4d0258*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdd48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        mov ebx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ebx+0xE0]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x58]
        test edi, edi
        mov esi, ecx
        je public_4d045b
        mov cl, byte ptr ds : [ebx+0x2BD]
        test cl, cl
        je public_4d0324
        mov eax, dword ptr ds : [ebx+0x1B4]
        test eax, eax
        je public_4d0305
        call public_54baf0
        test eax, eax
        je public_4d0305
        add eax, 0xC
        test eax, eax
        je public_4d02c3
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4d02c3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_4d02c5
        public_4d02c3 : nop
        xor eax, eax
        public_4d02c5 : nop
        mov edx, dword ptr ds : [eax+0x1B4]
        cmp edx, dword ptr ds : [ebx+0x1B4]
        jne public_4d0305
        push 0
        push 0
        push 0
        push edi
        push 0xF
        lea ecx, ss:[esp+0x20]
        call public_4cf030
        mov dword ptr ss : [esp+0x4C], 0
        public_4d02ed : nop
        mov edx, dword ptr ds : [esi+0x414]
        lea ecx, ds:[esi+0x410]
        push eax
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        jmp public_4d03db
        public_4d0305 : nop
        push 0
        push 0
        push 0
        push edi
        push 0xE
        lea ecx, ss:[esp+0x20]
        call public_4cf030
        mov dword ptr ss : [esp+0x4C], 1
        jmp public_4d03c8
        public_4d0324 : nop
        test eax, 0x420000
        je public_4d0347
        push 0
        push 0
        push 0
        push edi
        push 8
        lea ecx, ss:[esp+0x20]
        call public_4cf030
        mov dword ptr ss : [esp+0x4C], 2
        jmp public_4d02ed
        public_4d0347 : nop
        mov ecx, dword ptr ds : [ebx+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4d0388
        mov ebx, dword ptr ds : [ebx+0x88]
        test ebx, ebx
        je public_4d0388
        mov cl, byte ptr ds : [ebx+0x80]
        test cl, cl
        je public_4d0388
        push 0
        push 0
        push 0
        push edi
        push 0xA
        lea ecx, ss:[esp+0x20]
        call public_4cf030
        mov dword ptr ss : [esp+0x4C], 3
        jmp public_4d03c8
        public_4d0388 : nop
        test eax, 0x100000
        push 0
        push 0
        push 0
        push edi
        je public_4d03ae
        push 9
        lea ecx, ss:[esp+0x20]
        call public_4cf030
        mov dword ptr ss : [esp+0x4C], 4
        jmp public_4d02ed
        public_4d03ae : nop
        test eax, 0x200000
        je public_4d03f6
        push 5
        lea ecx, ss:[esp+0x20]
        call public_4cf030
        mov dword ptr ss : [esp+0x4C], 5
        public_4d03c8 : nop
        mov edx, dword ptr ds : [esi+0x414]
        lea ecx, ds:[esi+0x410]
        push eax
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        public_4d03db : nop
        call public_4d4740
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        je public_4d045b
        lea ecx, ss:[esp+0x10]
        jmp public_4d0453
        public_4d03f6 : nop
        push 0
        lea ecx, ss:[esp+0x3C]
        call public_4cf030
        mov ebx, eax
        mov edi, dword ptr ds : [esi+0x414]
        mov eax, dword ptr ds : [edi+4]
        add esi, 0x410
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 6
        call public_4d48f0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebx
        push eax
        call public_4d49b0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 8
        inc ecx
        test eax, eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        je public_4d045b
        lea ecx, ss:[esp+0x2C]
        public_4d0453 : nop
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4d045b : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x4d0250)
    }
}

#undef public_4d02c3
#undef public_4d02c5
#undef public_4d02ed
#undef public_4d0305
#undef public_4d0324
#undef public_4d0347
#undef public_4d0388
#undef public_4d03ae
#undef public_4d03c8
#undef public_4d03db
#undef public_4d03f6
#undef public_4d0453
#undef public_4d045b
