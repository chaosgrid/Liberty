#include "RendComp-PCH.h"


#define public_6c23665 _public_6c23665
#define public_6c2368f _public_6c2368f
#define public_6c236b1 _public_6c236b1
#define public_6c236bc _public_6c236bc
#define public_6c236c7 _public_6c236c7
#define public_6c236d2 _public_6c236d2
#define public_6c236dd _public_6c236dd
#define public_6c236fe _public_6c236fe
#define public_6c23720 _public_6c23720
#define public_6c23744 _public_6c23744
#define public_6c2374c _public_6c2374c
#define public_6c2375c _public_6c2375c
#define public_6c23762 _public_6c23762
#define public_6c2376a _public_6c2376a
#define public_6c23770 _public_6c23770

PROC_DECLARE(0x6c23650, internal_6c23650, public_6c23650);
extern "C" NAKED register_t __cdecl internal_6c23650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x1E8]
        cmp edx, dword ptr ds : [eax+0x14]
        jne public_6c23665
        or eax, 0xFFFFFFFF
        ret 0x10
        public_6c23665 : nop
        mov ecx, dword ptr ss : [esp+8]
        cmp ecx, 0x80
        ja public_6c236fe
        je public_6c236dd
        dec ecx
        cmp ecx, 0xF
        ja public_6c2375c
/*FIXUP movzx ecx, byte ptr ds : [ecx+public_6c237a4] @0x6c23681*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6c2378c] @0x6c23688*/
  JMPTB cmp ecx, 0
  JMPTB jne public_4c0000000000046f
  JMPTB mov ecx, 0
  JMPTB public_4c0000000000046f : nop
        je public_6c2368f
  JMPTB cmp ecx, 1
  JMPTB jne public_4c0000000000046b
  JMPTB mov ecx, 1
  JMPTB public_4c0000000000046b : nop
        je public_6c236bc
  JMPTB cmp ecx, 2
  JMPTB jne public_4c00000000000467
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000467 : nop
        je public_6c2375c
  JMPTB cmp ecx, 3
  JMPTB jne public_4c00000000000463
  JMPTB mov ecx, 2
  JMPTB public_4c00000000000463 : nop
        je public_6c236c7
  JMPTB cmp ecx, 4
  JMPTB jne public_4c0000000000045f
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000045f : nop
        je public_6c2375c
  JMPTB cmp ecx, 5
  JMPTB jne public_4c0000000000045b
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000045b : nop
        je public_6c2375c
  JMPTB cmp ecx, 6
  JMPTB jne public_4c00000000000457
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000457 : nop
        je public_6c2375c
  JMPTB cmp ecx, 7
  JMPTB jne public_4c00000000000453
  JMPTB mov ecx, 3
  JMPTB public_4c00000000000453 : nop
        je public_6c236b1
  JMPTB cmp ecx, 8
  JMPTB jne public_4c0000000000044f
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000044f : nop
        je public_6c2375c
  JMPTB cmp ecx, 9
  JMPTB jne public_4c0000000000044b
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000044b : nop
        je public_6c2375c
  JMPTB cmp ecx, 0xA
  JMPTB jne public_4c00000000000447
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000447 : nop
        je public_6c2375c
  JMPTB cmp ecx, 0xB
  JMPTB jne public_4c00000000000443
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000443 : nop
        je public_6c2375c
  JMPTB cmp ecx, 0xC
  JMPTB jne public_4c0000000000043f
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000043f : nop
        je public_6c2375c
  JMPTB cmp ecx, 0xD
  JMPTB jne public_4c0000000000043b
  JMPTB mov ecx, 5
  JMPTB public_4c0000000000043b : nop
        je public_6c2375c
  JMPTB cmp ecx, 0xE
  JMPTB jne public_4c00000000000437
  JMPTB mov ecx, 5
  JMPTB public_4c00000000000437 : nop
        je public_6c2375c
  JMPTB cmp ecx, 0xF
  JMPTB jne public_4c00000000000433
  JMPTB mov ecx, 4
  JMPTB public_4c00000000000433 : nop
        je public_6c236d2
  JMPTB int 3
        public_6c2368f : nop
        mov edx, dword ptr ds : [eax+0x1F0]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0x1E8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 0x10
        public_6c236b1 : nop
        mov ecx, dword ptr ds : [eax+0x1F4]
        jmp public_6c23770
        public_6c236bc : nop
        mov ecx, dword ptr ds : [eax+0x1F8]
        jmp public_6c23770
        public_6c236c7 : nop
        mov ecx, dword ptr ds : [eax+0x1FC]
        jmp public_6c23770
        public_6c236d2 : nop
        mov ecx, dword ptr ds : [eax+0x200]
        jmp public_6c23770
        public_6c236dd : nop
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+0x1E8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 0x10
        public_6c236fe : nop
        cmp ecx, 0x8000
        ja public_6c2374c
        je public_6c23744
        cmp ecx, 0x100
        je public_6c23720
        cmp ecx, 0x4000
        jne public_6c2375c
        mov ecx, dword ptr ds : [eax+0x208]
        jmp public_6c23770
        public_6c23720 : nop
        mov ecx, dword ptr ds : [eax+0x204]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x1E8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x10]
        shr edx, 1
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 0x10
        public_6c23744 : nop
        mov ecx, dword ptr ds : [eax+0x20C]
        jmp public_6c23770
        public_6c2374c : nop
        cmp ecx, 0x10000
        je public_6c2376a
        cmp ecx, 0x20000
        je public_6c23762
        public_6c2375c : nop
        or eax, 0xFFFFFFFF
        ret 0x10
        public_6c23762 : nop
        mov ecx, dword ptr ds : [eax+0x214]
        jmp public_6c23770
        public_6c2376a : nop
        mov ecx, dword ptr ds : [eax+0x210]
        public_6c23770 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+0x1E8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x6c23650)
        ASM_EXPORT_ENTRY_FIRST(0x6c2368f, public_6c2368f)
        ASM_EXPORT_ENTRY(0x6c236b1, public_6c236b1)
        ASM_EXPORT_ENTRY(0x6c236bc, public_6c236bc)
        ASM_EXPORT_ENTRY(0x6c236c7, public_6c236c7)
        ASM_EXPORT_ENTRY(0x6c236d2, public_6c236d2)
        ASM_EXPORT_ENTRY_LAST(0x6c2375c, public_6c2375c)
    }
}

#undef public_6c23665
#undef public_6c2368f
#undef public_6c236b1
#undef public_6c236bc
#undef public_6c236c7
#undef public_6c236d2
#undef public_6c236dd
#undef public_6c236fe
#undef public_6c23720
#undef public_6c23744
#undef public_6c2374c
#undef public_6c2375c
#undef public_6c23762
#undef public_6c2376a
#undef public_6c23770

#pragma init_seg(compiler)
extern "C" void const* const public_6c2368f = __AsmFindLabelExport(&internal_6c23650, 0x6c2368f);
extern "C" void const* const public_6c236b1 = __AsmFindLabelExport(&internal_6c23650, 0x6c236b1);
extern "C" void const* const public_6c236bc = __AsmFindLabelExport(&internal_6c23650, 0x6c236bc);
extern "C" void const* const public_6c236c7 = __AsmFindLabelExport(&internal_6c23650, 0x6c236c7);
extern "C" void const* const public_6c236d2 = __AsmFindLabelExport(&internal_6c23650, 0x6c236d2);
extern "C" void const* const public_6c2375c = __AsmFindLabelExport(&internal_6c23650, 0x6c2375c);
