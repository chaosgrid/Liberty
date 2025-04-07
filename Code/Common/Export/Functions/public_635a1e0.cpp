#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_628bea0);
CLANG_FORWARD_PROC_SYMBOL(public_63461a0);
CLANG_FORWARD_PROC_SYMBOL(public_6347380);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6353510);
CLANG_FORWARD_PROC_SYMBOL(public_6359850);
CLANG_FORWARD_PROC_SYMBOL(public_63599f0);
CLANG_FORWARD_PROC_SYMBOL(public_6359ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6359d10);
CLANG_FORWARD_PROC_SYMBOL(public_635a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_635bda0);

#define public_635a344 _public_635a344
#define public_635a36d _public_635a36d
#define public_635a384 _public_635a384
#define public_635a398 _public_635a398
#define public_635a3a7 _public_635a3a7
#define public_635a3c8 _public_635a3c8
#define public_635a3d7 _public_635a3d7
#define public_635a3f5 _public_635a3f5
#define public_635a413 _public_635a413
#define public_635a41d _public_635a41d
#define public_635a45e _public_635a45e
#define public_635a64e _public_635a64e
#define public_635a685 _public_635a685
#define public_635a835 _public_635a835
#define public_635a85b _public_635a85b

PROC_DECLARE(0x635a1e0, internal_635a1e0, public_635a1e0);
extern "C" NAKED register_t __cdecl internal_635a1e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x7C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [eax+0xA4]
        push 0xD8
        mov ecx, eax
        call public_6347380
        mov esi, eax
        mov ebx, dword ptr ds : [esi+0x54]
        mov eax, dword ptr ss : [esp+0x14]
        mov word ptr ds : [esi+0x52], 0
        and ebx, 0xFFFFFC00
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [edi+0x40], esi
        mov edx, dword ptr ds : [eax+0x80]
        xor ecx, ecx
        inc edx
        mov dword ptr ds : [eax+0x80], edx
        mov ch, byte ptr ds : [edi+0x16]
        lea ebp, ds:[edi+8]
        xor edx, edx
        mov dh, byte ptr ds : [edi+0x2A]
        lea ebx, ds:[edi+0x1C]
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        movsx eax, cx
        sar eax, 8
        mov dword ptr ss : [esp+0x20], eax
        movsx eax, dx
        sar eax, 8
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x10], eax
        and eax, 0xFFFFFFF0
        mov dword ptr ss : [esp+0x4C], 0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x68], eax
        call public_6353510
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x70], edx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x10]
        add ecx, edx
        mov dword ptr ss : [esp+0x14], eax
        and eax, 0xFFFFFFF0
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x74], ebx
        mov edx, dword ptr ds : [eax]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        sub eax, edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x7C], eax
        call public_6353510
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x84], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x80], eax
        mov edx, dword ptr ds : [ecx]
        add edx, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x78], edx
        mov dword ptr ss : [esp+0x88], ebp
        sub ecx, 0
        je public_635a36d
        dec ecx
        je public_635a344
        sub ecx, 2
        jne public_635a413
        fld dword ptr ds : [eax+0x50]
        mov ecx, dword ptr ds : [eax+0x54]
        fld dword ptr ds : [eax+0x4C]
        mov eax, dword ptr ds : [edi+0x60]
        fstp dword ptr ss : [esp+0x54]
        and eax, 0xFFFFFF01
        mov edx, ecx
        fstp dword ptr ss : [esp+0x58]
        or eax, 1
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ds : [edi+0x60], eax
        jmp public_635a384
        public_635a344 : nop
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        lea edx, ss:[esp+0x6C]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x84]
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_6359d10
        jmp public_635a41d
        public_635a36d : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x7C]
        push ecx
        push edx
        call public_635bda0
        add esp, 0xC
        public_635a384 : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 3
        ja public_635a413
/*FIXUP jmp dword ptr ds : [eax*4+public_635a8f0] @0x635a391*/
  JMPTB cmp eax, 0
  JMPTB je public_635a3a7
  JMPTB cmp eax, 1
  JMPTB je public_635a3d7
  JMPTB cmp eax, 2
  JMPTB je public_635a3f5
  JMPTB cmp eax, 3
  JMPTB je public_635a398
  JMPTB int 3
        public_635a398 : nop
        mov ecx, dword ptr ss : [esp+0x6C]
        lea eax, ss:[esp+0x44]
        push eax
        push esi
        add ecx, 0x4C
        jmp public_635a3c8
        public_635a3a7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x68]
        push ecx
        push edx
        call public_635bda0
        add esp, 0xC
        lea eax, ss:[esp+0x44]
        push eax
        push esi
        lea ecx, ss:[esp+0x2C]
        public_635a3c8 : nop
        push ecx
        lea edx, ss:[esp+0x60]
        push edx
        mov ecx, edi
        call public_63599f0
        jmp public_635a41d
        public_635a3d7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x44]
        push eax
        push esi
        lea ecx, ss:[esp+0x6C]
        push ecx
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        mov ecx, edi
        call public_6359ae0
        jmp public_635a41d
        public_635a3f5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x44]
        push ecx
        push esi
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, edi
        call public_6359850
        jmp public_635a41d
        public_635a413 : nop
        mov dword ptr ds : [0], 0
        public_635a41d : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x94]
        mov edx, eax
        push edx
        lea ecx, ds:[esi+0x20]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x20], eax
        call public_628be60
        mov eax, dword ptr ds : [ebx+8]
        fld dword ptr ds : [eax+0x94]
        fadd dword ptr ss : [esp+0x14]
        fsubr dword ptr ds : [edi+0x58]
        fst dword ptr ds : [edi+0x58]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_635a45e
        mov dword ptr ds : [edi+0x58], 0
        public_635a45e : nop
        mov eax, dword ptr ss : [esp+0x80]
        dec dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x6C]
        dec dword ptr ds : [eax+4]
        lea ebx, ds:[esi+0x78]
        mov ecx, ebx
        call public_6347ef0
        fld dword ptr ds : [ebx+4]
        fmul dword ptr ds : [esi]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [ebx]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [ebx]
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [ebx+8]
        fsubp 
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+4]
        fmul dword ptr ds : [esi+8]
        fsubp 
        fstp dword ptr ds : [esi+0x88]
        fstp dword ptr ds : [esi+0x8C]
        fxch 
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x90]
        mov ecx, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [ecx+0x98]
        fstp st(0)
        test byte ptr ds : [ebx], 0xC
        jne public_635a64e
        fld dword ptr ds : [esi+0x20]
        lea eax, ds:[esi+0x98]
        fsub dword ptr ds : [ebx+0x124]
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ds : [ebx+0x128]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [ebx+0x12C]
        fld dword ptr ds : [ebx+0x104]
        fmul st, st(2)
        fld dword ptr ds : [ebx+0x114]
        fmul st, st(2)
        faddp 
        fld dword ptr ds : [ebx+0xF4]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ebx+0x108]
        fmul st, st(2)
        fld dword ptr ds : [ebx+0x118]
        fmul st, st(2)
        faddp 
        fld dword ptr ds : [ebx+0xF8]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ebx+0x10C]
        fmul st, st(2)
        fld dword ptr ds : [ebx+0x11C]
        fmul st, st(2)
        faddp 
        fld dword ptr ds : [ebx+0xFC]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [ebx+0x104]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [ebx+0x114]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ds : [ebx+0xF4]
        fmul dword ptr ds : [esi]
        faddp 
        fld dword ptr ds : [ebx+0x118]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [ebx+0xF8]
        fmul dword ptr ds : [esi]
        faddp 
        fld dword ptr ds : [ebx+0x108]
        fmul dword ptr ds : [esi+4]
        faddp 
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [ebx+0x10C]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [ebx+0x11C]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ds : [ebx+0xFC]
        fmul dword ptr ds : [esi]
        faddp 
        lea edx, ss:[esp+0x34]
        push edx
        lea ecx, ds:[ebx+0x94]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x5C]
        push ecx
        fmul dword ptr ds : [eax]
        lea edx, ds:[ebx+0xA4]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x34]
        mov ecx, ebx
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fstp dword ptr ds : [esi+0xB8]
        fstp dword ptr ds : [esi+0xBC]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [esi+0xC0]
        call public_63461a0
        fld dword ptr ds : [esi+0xB8]
        fmul dword ptr ds : [ebx+0x34]
        xor eax, eax
        fld dword ptr ds : [esi+0xBC]
        fmul dword ptr ds : [ebx+0x38]
        fld dword ptr ds : [esi+0xC0]
        fmul dword ptr ds : [ebx+0x3C]
        fmul dword ptr ds : [esi+0xC0]
        fxch 
        fmul dword ptr ds : [esi+0xBC]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0xB8]
        faddp 
        fadd dword ptr ds : [ebx+0x40]
        fstp dword ptr ds : [esi+0x6C]
        jmp public_635a685
        public_635a64e : nop
        xor eax, eax
        xor ebx, ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ds : [esi+0x6C], eax
        mov dword ptr ds : [esi+0x98], eax
        mov dword ptr ds : [esi+0x9C], eax
        mov dword ptr ds : [esi+0xA0], eax
        mov dword ptr ds : [esi+0xB8], eax
        mov dword ptr ds : [esi+0xBC], eax
        mov dword ptr ds : [esi+0xC0], eax
        public_635a685 : nop
        mov dword ptr ds : [esi+0x70], ebx
        mov ecx, dword ptr ds : [edi+0x24]
        mov ebx, dword ptr ds : [ecx+0x98]
        test byte ptr ds : [ebx], 0xC
        jne public_635a835
        fld dword ptr ds : [esi+0x20]
        lea eax, ds:[esi+0xA8]
        fsub dword ptr ds : [ebx+0x124]
        fld dword ptr ds : [esi+0x24]
        fsub dword ptr ds : [ebx+0x128]
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [ebx+0x12C]
        fld dword ptr ds : [ebx+0x114]
        fmul st, st(1)
        fld dword ptr ds : [ebx+0x104]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ebx+0xF4]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ebx+0xF8]
        fmul st, st(3)
        fld dword ptr ds : [ebx+0x108]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ebx+0x118]
        fmul st, st(2)
        faddp 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ebx+0x11C]
        fmul st, st(1)
        fld dword ptr ds : [ebx+0xFC]
        fmul st, st(4)
        faddp 
        fld dword ptr ds : [ebx+0x10C]
        fmul st, st(3)
        faddp 
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [ebx+0x114]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [ebx+0xF4]
        fmul dword ptr ds : [esi]
        faddp 
        fld dword ptr ds : [ebx+0x104]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [ebx+0x108]
        fmul dword ptr ds : [esi+4]
        fld dword ptr ds : [ebx+0x118]
        fmul dword ptr ds : [esi+8]
        faddp 
        fld dword ptr ds : [ebx+0xF8]
        fmul dword ptr ds : [esi]
        faddp 
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [ebx+0x11C]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [ebx+0xFC]
        fmul dword ptr ds : [esi]
        faddp 
        fld dword ptr ds : [ebx+0x10C]
        fmul dword ptr ds : [esi+4]
        faddp 
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ds:[ebx+0x94]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x5C]
        push ecx
        fmul dword ptr ds : [eax]
        lea edx, ds:[ebx+0xA4]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x34]
        mov ecx, ebx
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fstp dword ptr ds : [esi+0xC8]
        fstp dword ptr ds : [esi+0xCC]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ds : [esi+0xD0]
        call public_63461a0
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_628bea0
        fld dword ptr ds : [ebx+0x34]
        fmul dword ptr ds : [esi+0xC8]
        fld dword ptr ds : [esi+0xCC]
        fmul dword ptr ds : [ebx+0x38]
        fld dword ptr ds : [esi+0xD0]
        fmul dword ptr ds : [ebx+0x3C]
        fmul dword ptr ds : [esi+0xD0]
        fxch 
        fmul dword ptr ds : [esi+0xCC]
        faddp 
        fxch 
        fmul dword ptr ds : [esi+0xC8]
        faddp 
        fadd dword ptr ds : [ebx+0x40]
        fadd dword ptr ds : [esi+0x6C]
        fstp dword ptr ds : [esi+0x6C]
        jmp public_635a85b
        public_635a835 : nop
        mov dword ptr ds : [esi+0xA8], eax
        mov dword ptr ds : [esi+0xAC], eax
        mov dword ptr ds : [esi+0xB0], eax
        mov dword ptr ds : [esi+0xC8], eax
        mov dword ptr ds : [esi+0xCC], eax
        mov dword ptr ds : [esi+0xD0], eax
        xor ebx, ebx
        public_635a85b : nop
        fld dword ptr ds : [public_63a53d0]
        mov dword ptr ds : [esi+0x74], ebx
        fdiv dword ptr ds : [esi+0x6C]
        fstp dword ptr ds : [esi+0x68]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [ecx+0xF8]
        mov ecx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [edi+0x68]
        mov dword ptr ss : [esp+0x28], ecx
        fadd dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [edi+0x68], eax
        fld dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edi+0x6C], ecx
        fmul dword ptr ds : [esi+0x80]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [esi+0x7C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [esi+0x78]
        faddp 
        fmul st, st(1)
        fsubr dword ptr ds : [edi+0x38]
        fstp dword ptr ds : [edi+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [esi+0x90]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [esi+0x8C]
        faddp 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [esi+0x88]
        faddp 
        fmul st, st(1)
        fsubr dword ptr ds : [edi+0x3C]
        fstp dword ptr ds : [edi+0x3C]
        pop edi
        pop esi
        pop ebp
        fstp st(0)
        pop ebx
        add esp, 0x7C
        ret 
        UNREACHABLE_TRAP(0x635a1e0)
        ASM_EXPORT_ENTRY_FIRST(0x635a398, public_635a398)
        ASM_EXPORT_ENTRY(0x635a3a7, public_635a3a7)
        ASM_EXPORT_ENTRY(0x635a3d7, public_635a3d7)
        ASM_EXPORT_ENTRY_LAST(0x635a3f5, public_635a3f5)
    }
}

#undef public_635a344
#undef public_635a36d
#undef public_635a384
#undef public_635a398
#undef public_635a3a7
#undef public_635a3c8
#undef public_635a3d7
#undef public_635a3f5
#undef public_635a413
#undef public_635a41d
#undef public_635a45e
#undef public_635a64e
#undef public_635a685
#undef public_635a835
#undef public_635a85b

#pragma init_seg(compiler)
extern "C" void const* const public_635a398 = __AsmFindLabelExport(&internal_635a1e0, 0x635a398);
extern "C" void const* const public_635a3a7 = __AsmFindLabelExport(&internal_635a1e0, 0x635a3a7);
extern "C" void const* const public_635a3d7 = __AsmFindLabelExport(&internal_635a1e0, 0x635a3d7);
extern "C" void const* const public_635a3f5 = __AsmFindLabelExport(&internal_635a1e0, 0x635a3f5);
