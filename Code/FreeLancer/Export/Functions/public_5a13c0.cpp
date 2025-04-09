#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a13c0);

#define public_5a13dc _public_5a13dc
#define public_5a13f8 _public_5a13f8
#define public_5a140a _public_5a140a
#define public_5a142d _public_5a142d
#define public_5a1446 _public_5a1446
#define public_5a147b _public_5a147b
#define public_5a149c _public_5a149c
#define public_5a14df _public_5a14df
#define public_5a14e9 _public_5a14e9
#define public_5a150d _public_5a150d
#define public_5a159c _public_5a159c
#define public_5a15a9 _public_5a15a9
#define public_5a15c0 _public_5a15c0
#define public_5a15d6 _public_5a15d6
#define public_5a15e3 _public_5a15e3
#define public_5a1604 _public_5a1604
#define public_5a1628 _public_5a1628

PROC_DECLARE(0x5a13c0, internal_5a13c0, public_5a13c0);
extern "C" NAKED register_t __cdecl internal_5a13c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x48
        push ebx
        dec eax
        cmp eax, 0xA
        push esi
        mov ebx, ecx
        ja public_5a14df
/*FIXUP jmp dword ptr ds : [eax*4+public_5a1638] @0x5a13d5*/
  JMPTB cmp eax, 0
  JMPTB je public_5a13dc
  JMPTB cmp eax, 1
  JMPTB je public_5a140a
  JMPTB cmp eax, 2
  JMPTB je public_5a15a9
  JMPTB cmp eax, 3
  JMPTB je public_5a15e3
  JMPTB cmp eax, 4
  JMPTB je public_5a142d
  JMPTB cmp eax, 5
  JMPTB je public_5a1446
  JMPTB cmp eax, 6
  JMPTB je public_5a14e9
  JMPTB cmp eax, 7
  JMPTB je public_5a150d
  JMPTB cmp eax, 8
  JMPTB je public_5a15c0
  JMPTB cmp eax, 9
  JMPTB je public_5a1628
  JMPTB cmp eax, 0xA
  JMPTB je public_5a1604
  JMPTB int 3
        public_5a13dc : nop
        cmp dword ptr ss : [esp+0x58], 1
        mov al, byte ptr ds : [ebx+0x6C]
        jne public_5a13f8
        and al, 0xFC
        mov byte ptr ds : [ebx+0x6C], al
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a13f8 : nop
        or al, 3
        mov byte ptr ds : [ebx+0x6C], al
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a140a : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov al, byte ptr ds : [ebx+0x6C]
        test ecx, ecx
        sete cl
        xor cl, al
        and cl, 1
        xor cl, al
        pop esi
        mov byte ptr ds : [ebx+0x6C], cl
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a142d : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a1446 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov esi, dword ptr ds : [ecx]
        lea eax, ds:[ebx+0xA8]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [ebx+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_5a14df
        test byte ptr ds : [ebx+0x2F4], 1
        jne public_5a147b
        lea eax, ds:[ebx+0x60]
        jmp public_5a149c
        public_5a147b : nop
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [ebx+0x60]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ebx+0x64]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+8]
        fadd dword ptr ds : [ebx+0x68]
        fstp dword ptr ss : [esp+0x10]
        public_5a149c : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [public_5c6d90]
        lea esi, ss:[esp+0x14]
        push esi
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ebx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5a14df : nop
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a14e9 : nop
        mov eax, dword ptr ss : [esp+0x58]
        add ebx, 0xA8
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+8]
        pop esi
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a150d : nop
        mov edx, dword ptr ds : [ebx+0x84]
        cmp edx, 0xFFFFFFFF
        je public_5a159c
        fld dword ptr ds : [ebx+0x60]
        mov esi, dword ptr ss : [esp+0x58]
        fadd dword ptr ds : [ebx+0xA8]
        push edi
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ebx+0xAC]
        rep movsd
        mov dword ptr ss : [esp+0x48], eax
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ebx+0x68]
        mov dword ptr ss : [esp+0x4C], ecx
        fadd dword ptr ds : [ebx+0xB0]
        mov ecx, dword ptr ds : [public_5c6d90]
        lea esi, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        pop edi
        public_5a159c : nop
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a15a9 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ebx+0xCC], eax
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a15c0 : nop
        mov eax, dword ptr ss : [esp+0x58]
        test eax, eax
        mov byte ptr ds : [ebx+0x2D2], 0
        je public_5a15d6
        mov byte ptr ds : [ebx+0x2D2], 1
        public_5a15d6 : nop
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a15e3 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x98]
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a1604 : nop
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x58]
        push edx
        add ebx, 0xD0
        push ebx
        push eax
        call dword ptr ds : [public_5c70a0]
        add esp, 0xC
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x48
        ret 0xC
        public_5a1628 : nop
        mov eax, dword ptr ds : [ebx+0x84]
        pop esi
        pop ebx
        add esp, 0x48
        ret 0xC
        UNREACHABLE_TRAP(0x5a13c0)
        ASM_EXPORT_ENTRY_SINGLE(0x5a1604, public_5a1604)
    }
}

#undef public_5a13dc
#undef public_5a13f8
#undef public_5a140a
#undef public_5a142d
#undef public_5a1446
#undef public_5a147b
#undef public_5a149c
#undef public_5a14df
#undef public_5a14e9
#undef public_5a150d
#undef public_5a159c
#undef public_5a15a9
#undef public_5a15c0
#undef public_5a15d6
#undef public_5a15e3
#undef public_5a1604
#undef public_5a1628

#pragma init_seg(compiler)
extern "C" void const* const public_5a1604 = __AsmFindLabelExport(&internal_5a13c0, 0x5a1604);
