#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8310);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8350);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8390);
CLANG_FORWARD_PROC_SYMBOL(public_6ec83c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec9f10);
CLANG_FORWARD_PROC_SYMBOL(public_6eca620);

#define public_6ec9f52 _public_6ec9f52
#define public_6ec9f57 _public_6ec9f57
#define public_6ec9f64 _public_6ec9f64
#define public_6ec9f69 _public_6ec9f69
#define public_6ec9f74 _public_6ec9f74
#define public_6ec9f7e _public_6ec9f7e
#define public_6ec9fa0 _public_6ec9fa0
#define public_6eca02e _public_6eca02e
#define public_6eca036 _public_6eca036
#define public_6eca06f _public_6eca06f
#define public_6eca07f _public_6eca07f
#define public_6eca11c _public_6eca11c
#define public_6eca13a _public_6eca13a
#define public_6eca147 _public_6eca147
#define public_6eca150 _public_6eca150
#define public_6eca177 _public_6eca177
#define public_6eca190 _public_6eca190
#define public_6eca1b3 _public_6eca1b3
#define public_6eca1bb _public_6eca1bb
#define public_6eca207 _public_6eca207
#define public_6eca213 _public_6eca213
#define public_6eca247 _public_6eca247
#define public_6eca25e _public_6eca25e
#define public_6eca269 _public_6eca269
#define public_6eca278 _public_6eca278
#define public_6eca28f _public_6eca28f
#define public_6eca2a8 _public_6eca2a8
#define public_6eca2c6 _public_6eca2c6
#define public_6eca321 _public_6eca321
#define public_6eca34b _public_6eca34b

PROC_DECLARE(0x6ec9f10, internal_6ec9f10, public_6ec9f10);
extern "C" NAKED register_t __cdecl internal_6ec9f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x3C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [ebp+0x1C]
        push esi
        lea eax, ds:[eax+eax*4]
        push edi
        shl eax, 2
        mov esi, ecx
        push eax
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ss : [esp+0x17], 0
        call public_6eca620
        mov ebx, eax
        push ebx
        push ebp
        mov ecx, esi
        call public_6ec9da0
        mov eax, dword ptr ss : [ebp+4]
        add eax, 0xFFFFFFFE
        cmp eax, 3
        ja public_6ec9f7e
/*FIXUP jmp dword ptr ds : [eax*4+public_6eca358] @0x6ec9f4b*/
  JMPTB cmp eax, 0
  JMPTB je public_6ec9f57
  JMPTB cmp eax, 1
  JMPTB je public_6ec9f69
  JMPTB cmp eax, 2
  JMPTB je public_6ec9f52
  JMPTB cmp eax, 3
  JMPTB je public_6ec9f64
  JMPTB int 3
        public_6ec9f52 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6ec9f57 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
/*FIXUP push offset _public_6ec8310 @0x6ec9f5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ec8310
        push 0x14
        push ecx
        jmp public_6ec9f74
        public_6ec9f64 : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6ec9f69 : nop
        mov edx, dword ptr ss : [ebp+0x1C]
/*FIXUP push offset _public_6ec8350 @0x6ec9f6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ec8350
        push 0x14
        push edx
        public_6ec9f74 : nop
        push ebx
        call dword ptr ds : [public_6ed1060]
        add esp, 0x10
        public_6ec9f7e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        jbe public_6eca34b
        add ebx, 8
        mov edi, edi
        public_6ec9fa0 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        je public_6eca1bb
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0xB4]
        fld dword ptr ds : [ecx+0x90]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, 0xAAAAAAAB
        mul dword ptr ds : [ecx+0xC8]
        mov edi, edx
        fstp dword ptr ss : [esp+0x40]
        shr edi, 1
        fld dword ptr ds : [ecx+0x9C]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [ecx+0xA8]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov esi, dword ptr ds : [ecx+0x10]
        mov ebp, dword ptr ds : [ecx+4]
        lea ecx, ds:[edi+edi*2]
        shl ecx, 3
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x40], esi
        call public_6eca620
        test edi, edi
        mov edx, eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0xC4]
        mov eax, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x24], edx
        lea ecx, ds:[eax+ecx*2]
        jbe public_6eca11c
        add ecx, 4
        lea eax, ds:[edx+0x12]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x2C], edi
        jmp public_6eca036
        public_6eca02e : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x3C]
        public_6eca036 : nop
        test esi, esi
        mov dx, word ptr ds : [ecx-4]
        mov word ptr ds : [eax-2], dx
        mov dx, word ptr ds : [ecx-2]
        mov word ptr ds : [eax], dx
        mov cx, word ptr ds : [ecx]
        movzx edx, word ptr ds : [eax-2]
        mov word ptr ds : [eax+2], cx
        je public_6eca06f
        mov ecx, dword ptr ds : [esi+edx*4]
        movzx edx, word ptr ds : [eax]
        mov dword ptr ds : [eax-0xE], ecx
        mov ecx, dword ptr ds : [esi+edx*4]
        movzx edx, word ptr ds : [eax+2]
        mov dword ptr ds : [eax-0xA], ecx
        mov ecx, dword ptr ds : [esi+edx*4]
        mov dword ptr ds : [eax-6], ecx
        jmp public_6eca07f
        public_6eca06f : nop
        movzx ecx, word ptr ds : [eax]
        mov dword ptr ds : [eax-0xE], edx
        movzx edx, word ptr ds : [eax+2]
        mov dword ptr ds : [eax-0xA], ecx
        mov dword ptr ds : [eax-6], edx
        public_6eca07f : nop
        mov edx, dword ptr ds : [eax-0xA]
        fld dword ptr ss : [esp+0x48]
        mov esi, dword ptr ds : [eax-6]
        lea edx, ds:[edx+edx*2]
        fmul dword ptr ss : [ebp+edx*4+8]
        lea edx, ss:[ebp+edx*4]
        fld dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [eax-0xE]
        fmul dword ptr ds : [edx+4]
        lea esi, ds:[esi+esi*2]
        lea esi, ss:[ebp+esi*4]
        lea ecx, ds:[ecx+ecx*2]
        faddp 
        lea ecx, ss:[ebp+ecx*4]
        fld dword ptr ss : [esp+0x40]
        add eax, 0x18
        fmul dword ptr ds : [edx]
        faddp 
        fadd dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [esi]
        mov esi, dword ptr ss : [esp+0x20]
        add esi, 6
        mov dword ptr ss : [esp+0x20], esi
        faddp 
        fadd dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x2C]
        dec ecx
        mov dword ptr ss : [esp+0x2C], ecx
        faddp 
        fadd dword ptr ss : [esp+0x1C]
        faddp 
        fmul dword ptr ds : [public_6ed2d50]
        fstp dword ptr ds : [eax-0x2A]
        jne public_6eca02e
        public_6eca11c : nop
        mov eax, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [eax+4]
        sub eax, 4
        je public_6eca13a
        dec eax
        jne public_6eca150
        mov ecx, dword ptr ss : [esp+0x24]
/*FIXUP push offset _public_6ec83c0 @0x6eca12f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ec83c0
        push 0x18
        push edi
        push ecx
        jmp public_6eca147
        public_6eca13a : nop
        mov edx, dword ptr ss : [esp+0x24]
/*FIXUP push offset _public_6ec8390 @0x6eca13e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ec8390
        push 0x18
        push edi
        push edx
        public_6eca147 : nop
        call dword ptr ds : [public_6ed1060]
        add esp, 0x10
        public_6eca150 : nop
        mov eax, dword ptr ds : [ebx]
        test byte ptr ds : [eax], 1
        jne public_6eca177
        lea ecx, ds:[edi+edi*2]
        shl ecx, 1
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_6eca620
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx+0x14], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [eax+0xC4], 0
        public_6eca177 : nop
        test edi, edi
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+0xC4]
        mov edx, dword ptr ds : [eax+0x14]
        lea eax, ds:[edx+ecx*2]
        jbe public_6eca1b3
        mov ecx, dword ptr ss : [esp+0x24]
        add ecx, 0x12
        public_6eca190 : nop
        mov dx, word ptr ds : [ecx-2]
        mov word ptr ds : [eax], dx
        mov dx, word ptr ds : [ecx]
        add eax, 2
        mov word ptr ds : [eax], dx
        mov dx, word ptr ds : [ecx+2]
        add eax, 2
        mov word ptr ds : [eax], dx
        add eax, 2
        add ecx, 0x18
        dec edi
        jne public_6eca190
        public_6eca1b3 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        public_6eca1bb : nop
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ecx+0xE0]
        test ah, 1
        je public_6eca213
        mov ecx, dword ptr ds : [ecx+0xCC]
        mov eax, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        test eax, eax
        setge al
        test al, al
        je public_6eca207
        mov ecx, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [ecx+0xD4]
        mov ecx, dword ptr ds : [ecx+0xD8]
        mov eax, dword ptr ds : [esi+0x4C]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        test eax, eax
        setge al
        test al, al
        jne public_6eca213
        public_6eca207 : nop
        mov eax, dword ptr ds : [ebx]
        and dword ptr ds : [eax+0xE0], 0xFFFFFEFF
        public_6eca213 : nop
        mov eax, dword ptr ds : [esi+0x48]
        lea ecx, ss:[esp+0x30]
        push ecx
        push 7
        mov dword ptr ss : [esp+0x38], 1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [ebx]
        test eax, eax
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ds : [eax]
        je public_6eca247
        add ecx, 0x88
        push ecx
        push eax
        call dword ptr ds : [edx+0x7C]
        jmp public_6eca25e
        public_6eca247 : nop
        add ecx, 0x28
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [esi+0x48]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x58
        push ecx
        push eax
        call dword ptr ds : [edx+0x74]
        public_6eca25e : nop
        cmp edi, dword ptr ds : [ebx+4]
        jne public_6eca269
        test byte ptr ds : [ebx-8], 0x20
        je public_6eca28f
        public_6eca269 : nop
        test edi, edi
        je public_6eca278
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edi]
        push eax
        push edi
        call dword ptr ds : [edx+0x1C]
        public_6eca278 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        add edx, 4
        push edx
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [ecx+0x18]
        mov edi, dword ptr ss : [esp+0x18]
        public_6eca28f : nop
        mov ecx, dword ptr ds : [esi+0x74]
        test ecx, ecx
        je public_6eca2c6
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+0xE4]
        test eax, eax
        je public_6eca2a8
        cmp dword ptr ss : [esp+0x34], eax
        je public_6eca2c6
        public_6eca2a8 : nop
        mov edx, dword ptr ds : [edx+0xE8]
        mov ebp, dword ptr ds : [ecx]
        push edx
        push eax
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push ecx
        call dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx+0xE4]
        mov dword ptr ss : [esp+0x34], edx
        public_6eca2c6 : nop
        mov eax, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [eax+0xE0]
        mov edx, dword ptr ds : [edi]
        push ebp
        mov ebp, dword ptr ds : [eax+0xC8]
        push ebp
        mov ebp, dword ptr ds : [eax+0xC4]
        push ebp
        mov ebp, dword ptr ds : [eax+0xC0]
        push ebp
        mov ebp, dword ptr ds : [eax+0xBC]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [eax+0xB8]
        push ebp
        push eax
        push ecx
        push edi
        mov dword ptr ss : [esp+0x48], ecx
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [esi+0x74]
        test eax, eax
        je public_6eca321
        mov ecx, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [ecx+0xE8]
        mov ecx, dword ptr ds : [ecx+0xE4]
        mov edx, dword ptr ds : [eax]
        push ebp
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x18]
        public_6eca321 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [edx+0x1C]
        add ebx, 0x14
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x38], eax
        jb public_6ec9fa0
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        je public_6eca34b
        mov ecx, dword ptr ds : [edi]
        push eax
        push edi
        call dword ptr ds : [ecx+0x1C]
        public_6eca34b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6ec9f10)
        ASM_EXPORT_ENTRY_FIRST(0x6ec9f52, public_6ec9f52)
        ASM_EXPORT_ENTRY(0x6ec9f57, public_6ec9f57)
        ASM_EXPORT_ENTRY(0x6ec9f64, public_6ec9f64)
        ASM_EXPORT_ENTRY_LAST(0x6ec9f69, public_6ec9f69)
    }
}

#undef public_6ec9f52
#undef public_6ec9f57
#undef public_6ec9f64
#undef public_6ec9f69
#undef public_6ec9f74
#undef public_6ec9f7e
#undef public_6ec9fa0
#undef public_6eca02e
#undef public_6eca036
#undef public_6eca06f
#undef public_6eca07f
#undef public_6eca11c
#undef public_6eca13a
#undef public_6eca147
#undef public_6eca150
#undef public_6eca177
#undef public_6eca190
#undef public_6eca1b3
#undef public_6eca1bb
#undef public_6eca207
#undef public_6eca213
#undef public_6eca247
#undef public_6eca25e
#undef public_6eca269
#undef public_6eca278
#undef public_6eca28f
#undef public_6eca2a8
#undef public_6eca2c6
#undef public_6eca321
#undef public_6eca34b

#pragma init_seg(compiler)
extern "C" void const* const public_6ec9f52 = __AsmFindLabelExport(&internal_6ec9f10, 0x6ec9f52);
extern "C" void const* const public_6ec9f57 = __AsmFindLabelExport(&internal_6ec9f10, 0x6ec9f57);
extern "C" void const* const public_6ec9f64 = __AsmFindLabelExport(&internal_6ec9f10, 0x6ec9f64);
extern "C" void const* const public_6ec9f69 = __AsmFindLabelExport(&internal_6ec9f10, 0x6ec9f69);
