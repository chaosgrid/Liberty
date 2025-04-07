#include "Freelancer-PCH.h"


#define public_54a348 _public_54a348
#define public_54a350 _public_54a350
#define public_54a368 _public_54a368
#define public_54a36f _public_54a36f
#define public_54a376 _public_54a376
#define public_54a37d _public_54a37d
#define public_54a384 _public_54a384
#define public_54a38b _public_54a38b
#define public_54a392 _public_54a392
#define public_54a399 _public_54a399
#define public_54a39e _public_54a39e
#define public_54a3c8 _public_54a3c8
#define public_54a3e6 _public_54a3e6
#define public_54a41b _public_54a41b
#define public_54a425 _public_54a425

PROC_DECLARE(0x54a2e0, internal_54a2e0, public_54a2e0);
extern "C" NAKED register_t __cdecl internal_54a2e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x28
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        mov ecx, 0xA
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, dword ptr ss : [esp+0x40]
        movsx ecx, ax
        mov edx, eax
        mov dword ptr ss : [esp+0x40], ecx
        shr edx, 0x10
        movsx ecx, dx
        fild dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x40], ecx
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x40]
        xor eax, eax
        test cl, 4
        mov byte ptr ss : [esp+0x2E], 1
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], 3
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], ecx
        je public_54a348
        mov eax, 1
        public_54a348 : nop
        test cl, 8
        je public_54a350
        or eax, 2
        public_54a350 : nop
        mov byte ptr ss : [esp+0x2C], al
        lea ecx, ds:[edx-0x201]
        xor eax, eax
        cmp ecx, 7
        ja public_54a39e
/*FIXUP jmp dword ptr ds : [ecx*4+public_54a430] @0x54a361*/
  JMPTB cmp ecx, 0
  JMPTB je public_54a368
  JMPTB cmp ecx, 1
  JMPTB je public_54a36f
  JMPTB cmp ecx, 2
  JMPTB je public_54a392
  JMPTB cmp ecx, 3
  JMPTB je public_54a376
  JMPTB cmp ecx, 4
  JMPTB je public_54a37d
  JMPTB cmp ecx, 5
  JMPTB je public_54a399
  JMPTB cmp ecx, 6
  JMPTB je public_54a384
  JMPTB cmp ecx, 7
  JMPTB je public_54a38b
  JMPTB int 3
        public_54a368 : nop
        mov eax, 0x201
        jmp public_54a39e
        public_54a36f : nop
        mov eax, 0x101
        jmp public_54a39e
        public_54a376 : nop
        mov eax, 0x202
        jmp public_54a39e
        public_54a37d : nop
        mov eax, 0x102
        jmp public_54a39e
        public_54a384 : nop
        mov eax, 0x204
        jmp public_54a39e
        public_54a38b : nop
        mov eax, 0x104
        jmp public_54a39e
        public_54a392 : nop
        mov eax, 0x401
        jmp public_54a39e
        public_54a399 : nop
        mov eax, 0x402
        public_54a39e : nop
        mov ecx, dword ptr ds : [esi+0xBA0]
        test ecx, ecx
        mov byte ptr ss : [esp+0x2D], al
        je public_54a425
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x70]
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_54a3c8
        pop edi
        mov al, 1
        pop esi
        add esp, 0x28
        ret 0x10
        public_54a3c8 : nop
        mov ecx, dword ptr ds : [esi+0xBA0]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x74]
        test eax, eax
        je public_54a3e6
        pop edi
        mov al, 1
        pop esi
        add esp, 0x28
        ret 0x10
        public_54a3e6 : nop
        cmp dword ptr ss : [esp+8], 0xE
        jle public_54a425
        mov eax, dword ptr ds : [esi+0xBA0]
        test eax, eax
        je public_54a41b
        mov eax, dword ptr ds : [eax+0xC0]
        test eax, eax
        je public_54a41b
        lea ecx, ds:[eax-8]
        test ecx, ecx
        je public_54a41b
        cmp dword ptr ds : [ecx+0x1C], 1
        jne public_54a41b
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [edx+0x1CC]
        public_54a41b : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x28
        ret 0x10
        public_54a425 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0x28
        ret 0x10
        UNREACHABLE_TRAP(0x54a2e0)
        ASM_EXPORT_ENTRY_SINGLE(0x54a38b, public_54a38b)
    }
}

#undef public_54a348
#undef public_54a350
#undef public_54a368
#undef public_54a36f
#undef public_54a376
#undef public_54a37d
#undef public_54a384
#undef public_54a38b
#undef public_54a392
#undef public_54a399
#undef public_54a39e
#undef public_54a3c8
#undef public_54a3e6
#undef public_54a41b
#undef public_54a425

#pragma init_seg(compiler)
extern "C" void const* const public_54a38b = __AsmFindLabelExport(&internal_54a2e0, 0x54a38b);
