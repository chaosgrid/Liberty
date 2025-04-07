#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed06a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed09c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ab0);

#define public_6ed06b6 _public_6ed06b6
#define public_6ed06df _public_6ed06df
#define public_6ed06f6 _public_6ed06f6
#define public_6ed070a _public_6ed070a
#define public_6ed0730 _public_6ed0730
#define public_6ed0762 _public_6ed0762
#define public_6ed0790 _public_6ed0790
#define public_6ed079b _public_6ed079b
#define public_6ed07db _public_6ed07db
#define public_6ed07e3 _public_6ed07e3
#define public_6ed0802 _public_6ed0802
#define public_6ed0810 _public_6ed0810
#define public_6ed083c _public_6ed083c
#define public_6ed084b _public_6ed084b
#define public_6ed085c _public_6ed085c
#define public_6ed087e _public_6ed087e
#define public_6ed0887 _public_6ed0887
#define public_6ed0891 _public_6ed0891
#define public_6ed08b5 _public_6ed08b5
#define public_6ed08ec _public_6ed08ec
#define public_6ed08f8 _public_6ed08f8
#define public_6ed0921 _public_6ed0921
#define public_6ed0929 _public_6ed0929
#define public_6ed093e _public_6ed093e
#define public_6ed094b _public_6ed094b

PROC_DECLARE(0x6ed06a0, internal_6ed06a0, public_6ed06a0);
extern "C" NAKED register_t __cdecl internal_6ed06a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        push edi
        je public_6ed094b
        mov ebx, dword ptr ds : [public_6ed1048]
        public_6ed06b6 : nop
        push esi
        call public_6ed0ab0
        mov ebp, eax
        movsx eax, byte ptr ds : [esi]
        add esp, 4
        cmp eax, 0x27
        mov dword ptr ss : [esp+0x14], ebp
        ja public_6ed094b
/*FIXUP movzx eax, byte ptr ds : [eax+public_6ed0990] @0x6ed06d1*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed0954] @0x6ed06d8*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000013a8
  JMPTB mov eax, 0
  JMPTB public_4c000000000013a8 : nop
        je public_6ed0887
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000013a4
  JMPTB mov eax, 1
  JMPTB public_4c000000000013a4 : nop
        je public_6ed06df
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000013a0
  JMPTB mov eax, 2
  JMPTB public_4c000000000013a0 : nop
        je public_6ed06f6
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000139c
  JMPTB mov eax, 3
  JMPTB public_4c0000000000139c : nop
        je public_6ed0790
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000001398
  JMPTB mov eax, 4
  JMPTB public_4c00000000001398 : nop
        je public_6ed07e3
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000001394
  JMPTB mov eax, 5
  JMPTB public_4c00000000001394 : nop
        je public_6ed0810
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000001390
  JMPTB mov eax, 6
  JMPTB public_4c00000000001390 : nop
        je public_6ed083c
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000138c
  JMPTB mov eax, 7
  JMPTB public_4c0000000000138c : nop
        je public_6ed084b
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000001388
  JMPTB mov eax, 8
  JMPTB public_4c00000000001388 : nop
        je public_6ed079b
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000001384
  JMPTB mov eax, 7
  JMPTB public_4c00000000001384 : nop
        je public_6ed084b
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000001380
  JMPTB mov eax, 9
  JMPTB public_4c00000000001380 : nop
        je public_6ed08ec
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000137c
  JMPTB mov eax, 9
  JMPTB public_4c0000000000137c : nop
        je public_6ed08ec
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c00000000001378
  JMPTB mov eax, 0xA
  JMPTB public_4c00000000001378 : nop
        je public_6ed070a
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c00000000001374
  JMPTB mov eax, 0xB
  JMPTB public_4c00000000001374 : nop
        je public_6ed0762
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c00000000001370
  JMPTB mov eax, 0xE
  JMPTB public_4c00000000001370 : nop
        je public_6ed094b
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000136c
  JMPTB mov eax, 0xE
  JMPTB public_4c0000000000136c : nop
        je public_6ed094b
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c00000000001368
  JMPTB mov eax, 0xE
  JMPTB public_4c00000000001368 : nop
        je public_6ed094b
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c00000000001364
  JMPTB mov eax, 0xE
  JMPTB public_4c00000000001364 : nop
        je public_6ed094b
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c00000000001360
  JMPTB mov eax, 0xE
  JMPTB public_4c00000000001360 : nop
        je public_6ed094b
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000135c
  JMPTB mov eax, 0xE
  JMPTB public_4c0000000000135c : nop
        je public_6ed094b
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c00000000001358
  JMPTB mov eax, 0xE
  JMPTB public_4c00000000001358 : nop
        je public_6ed094b
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c00000000001354
  JMPTB mov eax, 0xC
  JMPTB public_4c00000000001354 : nop
        je public_6ed085c
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c00000000001350
  JMPTB mov eax, 0xC
  JMPTB public_4c00000000001350 : nop
        je public_6ed085c
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000134c
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000134c : nop
        je public_6ed085c
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c00000000001348
  JMPTB mov eax, 0xC
  JMPTB public_4c00000000001348 : nop
        je public_6ed085c
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c00000000001344
  JMPTB mov eax, 0xC
  JMPTB public_4c00000000001344 : nop
        je public_6ed085c
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c00000000001340
  JMPTB mov eax, 0xC
  JMPTB public_4c00000000001340 : nop
        je public_6ed085c
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000133c
  JMPTB mov eax, 0xC
  JMPTB public_4c0000000000133c : nop
        je public_6ed085c
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c00000000001338
  JMPTB mov eax, 0xC
  JMPTB public_4c00000000001338 : nop
        je public_6ed085c
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c00000000001334
  JMPTB mov eax, 0xC
  JMPTB public_4c00000000001334 : nop
        je public_6ed085c
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c00000000001330
  JMPTB mov eax, 0xE
  JMPTB public_4c00000000001330 : nop
        je public_6ed094b
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000132c
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000132c : nop
        je public_6ed0891
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c00000000001328
  JMPTB mov eax, 0xD
  JMPTB public_4c00000000001328 : nop
        je public_6ed0891
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c00000000001324
  JMPTB mov eax, 0xD
  JMPTB public_4c00000000001324 : nop
        je public_6ed0891
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c00000000001320
  JMPTB mov eax, 0xD
  JMPTB public_4c00000000001320 : nop
        je public_6ed0891
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000131c
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000131c : nop
        je public_6ed0891
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c00000000001318
  JMPTB mov eax, 0xD
  JMPTB public_4c00000000001318 : nop
        je public_6ed0891
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c00000000001314
  JMPTB mov eax, 0xD
  JMPTB public_4c00000000001314 : nop
        je public_6ed0891
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c00000000001310
  JMPTB mov eax, 0xD
  JMPTB public_4c00000000001310 : nop
        je public_6ed0891
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000130c
  JMPTB mov eax, 0xD
  JMPTB public_4c0000000000130c : nop
        je public_6ed0891
  JMPTB int 3
        public_6ed06df : nop
        mov ecx, dword ptr ds : [public_6ed5830]
        cmp ecx, dword ptr ds : [public_6ed584c]
        jne public_6ed094b
        jmp public_6ed084b
        public_6ed06f6 : nop
        mov edx, dword ptr ds : [public_6ed5830]
        cmp byte ptr ds : [edx], 0
        jne public_6ed094b
        jmp public_6ed084b
        public_6ed070a : nop
        mov eax, dword ptr ds : [public_6ed5830]
        movsx ecx, byte ptr ds : [eax]
        mov esi, dword ptr ds : [public_6ed1070]
        push ecx
        call esi
        add esp, 4
        test eax, eax
        mov eax, dword ptr ds : [public_6ed5830]
        jne public_6ed0730
        cmp byte ptr ds : [eax], 0x5F
        jne public_6ed094b
        public_6ed0730 : nop
        cmp eax, dword ptr ds : [public_6ed584c]
        jbe public_6ed084b
        movsx edx, byte ptr ds : [eax-1]
        push edx
        call esi
        add esp, 4
        test eax, eax
        jne public_6ed094b
        mov eax, dword ptr ds : [public_6ed5830]
        cmp byte ptr ds : [eax-1], 0x5F
        je public_6ed094b
        jmp public_6ed084b
        public_6ed0762 : nop
        mov ecx, dword ptr ds : [public_6ed5830]
        movsx edx, byte ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_6ed1070]
        add esp, 4
        test eax, eax
        jne public_6ed094b
        mov eax, dword ptr ds : [public_6ed5830]
        cmp byte ptr ds : [eax], 0x5F
        je public_6ed094b
        jmp public_6ed084b
        public_6ed0790 : nop
        mov ecx, dword ptr ds : [public_6ed5830]
        cmp byte ptr ds : [ecx], 0
        jmp public_6ed0802
        public_6ed079b : nop
        mov al, byte ptr ds : [esi+3]
        mov ecx, dword ptr ds : [public_6ed5830]
        cmp al, byte ptr ds : [ecx]
        lea edx, ds:[esi+3]
        jne public_6ed094b
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        cmp esi, 1
        jle public_6ed07db
        mov eax, dword ptr ds : [public_6ed5830]
        push esi
        push eax
        push edx
        call dword ptr ds : [public_6ed106c]
        add esp, 0xC
        test eax, eax
        jne public_6ed094b
        public_6ed07db : nop
        add dword ptr ds : [public_6ed5830], esi
        jmp public_6ed084b
        public_6ed07e3 : nop
        mov ecx, dword ptr ds : [public_6ed5830]
        mov al, byte ptr ds : [ecx]
        test al, al
        je public_6ed094b
        movsx edx, al
        push edx
        add esi, 3
        push esi
        call ebx
        add esp, 8
        test eax, eax
        public_6ed0802 : nop
        je public_6ed094b
        inc dword ptr ds : [public_6ed5830]
        jmp public_6ed084b
        public_6ed0810 : nop
        mov eax, dword ptr ds : [public_6ed5830]
        mov al, byte ptr ds : [eax]
        test al, al
        je public_6ed094b
        movsx ecx, al
        push ecx
        add esi, 3
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_6ed094b
        inc dword ptr ds : [public_6ed5830]
        jmp public_6ed084b
        public_6ed083c : nop
        cmp byte ptr ss : [ebp], 6
        je public_6ed08b5
        add esi, 3
        mov dword ptr ss : [esp+0x14], esi
        mov ebp, esi
        public_6ed084b : nop
        test ebp, ebp
        mov esi, ebp
        jne public_6ed06b6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6ed085c : nop
        movsx esi, byte ptr ds : [esi]
        mov edi, dword ptr ds : [public_6ed5830]
        push ebp
        sub esi, 0x14
        call public_6ed06a0
        add esp, 4
        test eax, eax
        je public_6ed094b
        mov eax, dword ptr ds : [public_6ed5844]
        public_6ed087e : nop
        cmp dword ptr ds : [eax+esi*4], 0
        jne public_6ed0887
        mov dword ptr ds : [eax+esi*4], edi
        public_6ed0887 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_6ed0891 : nop
        movsx esi, byte ptr ds : [esi]
        mov edi, dword ptr ds : [public_6ed5830]
        push ebp
        sub esi, 0x1E
        call public_6ed06a0
        add esp, 4
        test eax, eax
        je public_6ed094b
        mov eax, dword ptr ds : [public_6ed5848]
        jmp public_6ed087e
        public_6ed08b5 : nop
        mov edi, dword ptr ds : [public_6ed5830]
        lea edx, ds:[esi+3]
        push edx
        call public_6ed06a0
        add esp, 4
        test eax, eax
        jne public_6ed0887
        push esi
        mov dword ptr ds : [public_6ed5830], edi
        call public_6ed0ab0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ed094b
        cmp byte ptr ds : [esi], 6
        je public_6ed08b5
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6ed08ec : nop
        mov al, byte ptr ss : [ebp]
        xor bl, bl
        cmp al, 8
        jne public_6ed08f8
        mov bl, byte ptr ss : [ebp+3]
        public_6ed08f8 : nop
        mov cl, byte ptr ds : [esi]
        mov ebp, dword ptr ds : [public_6ed5830]
        xor eax, eax
        cmp cl, 0xA
        setne al
        add esi, 3
        push esi
        mov edi, eax
        call public_6ed09c0
        mov esi, eax
        add esp, 4
        cmp esi, edi
        jl public_6ed094b
        mov eax, dword ptr ds : [public_6ed5830]
        public_6ed0921 : nop
        test bl, bl
        je public_6ed0929
        cmp byte ptr ds : [eax], bl
        jne public_6ed093e
        public_6ed0929 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        call public_6ed06a0
        add esp, 4
        test eax, eax
        jne public_6ed0887
        public_6ed093e : nop
        dec esi
        cmp esi, edi
        lea eax, ds:[esi+ebp]
        mov dword ptr ds : [public_6ed5830], eax
        jge public_6ed0921
        public_6ed094b : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ed06a0)
        ASM_EXPORT_ENTRY_FIRST(0x6ed06df, public_6ed06df)
        ASM_EXPORT_ENTRY(0x6ed06f6, public_6ed06f6)
        ASM_EXPORT_ENTRY(0x6ed070a, public_6ed070a)
        ASM_EXPORT_ENTRY(0x6ed0762, public_6ed0762)
        ASM_EXPORT_ENTRY(0x6ed0790, public_6ed0790)
        ASM_EXPORT_ENTRY(0x6ed079b, public_6ed079b)
        ASM_EXPORT_ENTRY(0x6ed07e3, public_6ed07e3)
        ASM_EXPORT_ENTRY(0x6ed0810, public_6ed0810)
        ASM_EXPORT_ENTRY(0x6ed083c, public_6ed083c)
        ASM_EXPORT_ENTRY(0x6ed084b, public_6ed084b)
        ASM_EXPORT_ENTRY(0x6ed085c, public_6ed085c)
        ASM_EXPORT_ENTRY(0x6ed0887, public_6ed0887)
        ASM_EXPORT_ENTRY(0x6ed0891, public_6ed0891)
        ASM_EXPORT_ENTRY(0x6ed08ec, public_6ed08ec)
        ASM_EXPORT_ENTRY_LAST(0x6ed094b, public_6ed094b)
    }
}

#undef public_6ed06b6
#undef public_6ed06df
#undef public_6ed06f6
#undef public_6ed070a
#undef public_6ed0730
#undef public_6ed0762
#undef public_6ed0790
#undef public_6ed079b
#undef public_6ed07db
#undef public_6ed07e3
#undef public_6ed0802
#undef public_6ed0810
#undef public_6ed083c
#undef public_6ed084b
#undef public_6ed085c
#undef public_6ed087e
#undef public_6ed0887
#undef public_6ed0891
#undef public_6ed08b5
#undef public_6ed08ec
#undef public_6ed08f8
#undef public_6ed0921
#undef public_6ed0929
#undef public_6ed093e
#undef public_6ed094b

#pragma init_seg(compiler)
extern "C" void const* const public_6ed06df = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed06df);
extern "C" void const* const public_6ed06f6 = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed06f6);
extern "C" void const* const public_6ed070a = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed070a);
extern "C" void const* const public_6ed0762 = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed0762);
extern "C" void const* const public_6ed0790 = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed0790);
extern "C" void const* const public_6ed079b = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed079b);
extern "C" void const* const public_6ed07e3 = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed07e3);
extern "C" void const* const public_6ed0810 = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed0810);
extern "C" void const* const public_6ed083c = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed083c);
extern "C" void const* const public_6ed084b = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed084b);
extern "C" void const* const public_6ed085c = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed085c);
extern "C" void const* const public_6ed0887 = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed0887);
extern "C" void const* const public_6ed0891 = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed0891);
extern "C" void const* const public_6ed08ec = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed08ec);
extern "C" void const* const public_6ed094b = __AsmFindLabelExport(&internal_6ed06a0, 0x6ed094b);
