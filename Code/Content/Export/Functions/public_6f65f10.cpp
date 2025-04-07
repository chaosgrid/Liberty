#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f64800);
CLANG_FORWARD_PROC_SYMBOL(public_6f64fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f65900);
CLANG_FORWARD_PROC_SYMBOL(public_6f65d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f65f10);
CLANG_FORWARD_PROC_SYMBOL(public_6f69570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc40);

#define public_6f65f46 _public_6f65f46
#define public_6f65f4c _public_6f65f4c
#define public_6f65f52 _public_6f65f52
#define public_6f65fc6 _public_6f65fc6
#define public_6f65fd5 _public_6f65fd5
#define public_6f65fd9 _public_6f65fd9
#define public_6f65ff0 _public_6f65ff0
#define public_6f65ff2 _public_6f65ff2
#define public_6f6600e _public_6f6600e
#define public_6f66030 _public_6f66030
#define public_6f66038 _public_6f66038
#define public_6f6603c _public_6f6603c
#define public_6f6604a _public_6f6604a
#define public_6f66052 _public_6f66052
#define public_6f66056 _public_6f66056
#define public_6f6606f _public_6f6606f
#define public_6f660a1 _public_6f660a1
#define public_6f660d0 _public_6f660d0
#define public_6f66122 _public_6f66122
#define public_6f6614a _public_6f6614a
#define public_6f66152 _public_6f66152
#define public_6f6615e _public_6f6615e
#define public_6f6619f _public_6f6619f

PROC_DECLARE(0x6f65f10, internal_6f65f10, public_6f65f10);
extern "C" NAKED register_t __cdecl internal_6f65f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fafc40 @0x6f65f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc40
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov ecx, dword ptr ss : [esp+0x48]
        mov al, byte ptr ss : [esp+0x44]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x14], al
        jne public_6f65f46
        xor eax, eax
        jmp public_6f65f4c
        public_6f65f46 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        sub eax, ecx
        public_6f65f4c : nop
        cmp eax, ebx
        jge public_6f65f52
        xor eax, eax
        public_6f65f52 : nop
        push eax
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 4
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        call public_6f69570
        mov ebp, eax
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov eax, dword ptr ss : [esp+0x34]
        cmp byte ptr ds : [eax], bl
        mov byte ptr ss : [esp+0x2C], 1
        je public_6f65fd9
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x5C]
        lea edx, ss:[esp+0x10]
        mov byte ptr ds : [ecx+7], 1
        push edx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax+0x104], ebx
        je public_6f65fc6
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx+0x104]
        cmp dword ptr ds : [eax+8], 3
        je public_6f65fd5
        public_6f65fc6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [eax+8], 1
        mov ecx, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [ecx+1], bl
        public_6f65fd5 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6f65fd9 : nop
        mov edx, dword ptr ss : [esp+0x54]
        cmp dword ptr ds : [edx], ebx
        mov ecx, dword ptr ss : [esp+0x18]
        jne public_6f6615e
        lea esp, ss:[esp]
        public_6f65ff0 : nop
        xor edx, edx
        public_6f65ff2 : nop
        cmp ecx, ebx
        je public_6f6619f
        mov eax, ebp
        sub eax, ecx
        cmp edx, eax
        jae public_6f6619f
        cmp byte ptr ds : [ecx+edx], bl
        jne public_6f6600e
        inc edx
        jmp public_6f65ff2
        public_6f6600e : nop
        sub ebp, ecx
        call dword ptr ds : [public_6fb3370]
        imul eax, ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edi, eax
        sar edi, 0xF
        nop 
        public_6f66030 : nop
        cmp ecx, ebx
        jne public_6f66038
        xor esi, esi
        jmp public_6f6603c
        public_6f66038 : nop
        mov esi, ebp
        sub esi, ecx
        public_6f6603c : nop
        xor edx, edx
        mov eax, edi
        div esi
        cmp byte ptr ds : [edx+ecx], bl
        jne public_6f6604a
        inc edi
        jmp public_6f66030
        public_6f6604a : nop
        cmp ecx, ebx
        jne public_6f66052
        xor esi, esi
        jmp public_6f66056
        public_6f66052 : nop
        mov esi, ebp
        sub esi, ecx
        public_6f66056 : nop
        xor edx, edx
        mov eax, edi
        div esi
        lea eax, ds:[edx-1]
        cmp eax, 7
        ja public_6f66152
/*FIXUP jmp dword ptr ds : [eax*4+public_6f661f4] @0x6f66068*/
  JMPTB cmp eax, 0
  JMPTB je public_6f66122
  JMPTB cmp eax, 1
  JMPTB je public_6f660d0
  JMPTB cmp eax, 2
  JMPTB je public_6f660d0
  JMPTB cmp eax, 3
  JMPTB je public_6f660d0
  JMPTB cmp eax, 4
  JMPTB je public_6f660d0
  JMPTB cmp eax, 5
  JMPTB je public_6f660d0
  JMPTB cmp eax, 6
  JMPTB je public_6f6606f
  JMPTB cmp eax, 7
  JMPTB je public_6f660a1
  JMPTB int 3
        public_6f6606f : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        push ecx
        push edx
        call public_6f64800
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x18
        mov byte ptr ds : [eax+7], bl
        jmp public_6f6614a
        public_6f660a1 : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push ecx
        push edx
        push eax
        call public_6f64fc0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 0x18
        mov byte ptr ds : [ecx+8], bl
        jmp public_6f6614a
        public_6f660d0 : nop
        mov edx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push edx
        mov edx, dword ptr ss : [esp+0x44]
        lea eax, ss:[esp+0x20]
        push eax
        mov eax, dword ptr ss : [esp+0x44]
        push ecx
        push edx
        push eax
        call public_6f65900
        mov ecx, dword ptr ss : [esp+0x34]
        mov byte ptr ds : [ecx+6], bl
        mov edx, dword ptr ss : [esp+0x34]
        mov byte ptr ds : [edx+5], bl
        mov eax, dword ptr ss : [esp+0x34]
        mov byte ptr ds : [eax+4], bl
        mov ecx, dword ptr ss : [esp+0x34]
        mov byte ptr ds : [ecx+3], bl
        mov edx, dword ptr ss : [esp+0x34]
        add esp, 0x1C
        mov byte ptr ds : [edx+2], bl
        jmp public_6f6614a
        public_6f66122 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        push ecx
        call public_6f65d20
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 0x14
        mov byte ptr ds : [edx+1], bl
        public_6f6614a : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        public_6f66152 : nop
        mov eax, dword ptr ss : [esp+0x54]
        cmp dword ptr ds : [eax], ebx
        je public_6f65ff0
        public_6f6615e : nop
        mov edx, dword ptr ss : [esp+0x54]
        cmp dword ptr ds : [edx], ebx
        push ecx
        setne byte ptr ss : [esp+0x58]
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x4C]
        push eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call public_6fa8fe0
        mov al, byte ptr ss : [esp+0x5C]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        public_6f6619f : nop
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ss : [esp+0x4C]
        add esp, 4
        push ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFF
        call public_6ea1490
        mov eax, dword ptr ss : [esp+0x48]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f65f10)
        ASM_EXPORT_ENTRY_FIRST(0x6f6606f, public_6f6606f)
        ASM_EXPORT_ENTRY(0x6f660a1, public_6f660a1)
        ASM_EXPORT_ENTRY(0x6f660d0, public_6f660d0)
        ASM_EXPORT_ENTRY_LAST(0x6f66122, public_6f66122)
    }
}

#undef public_6f65f46
#undef public_6f65f4c
#undef public_6f65f52
#undef public_6f65fc6
#undef public_6f65fd5
#undef public_6f65fd9
#undef public_6f65ff0
#undef public_6f65ff2
#undef public_6f6600e
#undef public_6f66030
#undef public_6f66038
#undef public_6f6603c
#undef public_6f6604a
#undef public_6f66052
#undef public_6f66056
#undef public_6f6606f
#undef public_6f660a1
#undef public_6f660d0
#undef public_6f66122
#undef public_6f6614a
#undef public_6f66152
#undef public_6f6615e
#undef public_6f6619f

#pragma init_seg(compiler)
extern "C" void const* const public_6f6606f = __AsmFindLabelExport(&internal_6f65f10, 0x6f6606f);
extern "C" void const* const public_6f660a1 = __AsmFindLabelExport(&internal_6f65f10, 0x6f660a1);
extern "C" void const* const public_6f660d0 = __AsmFindLabelExport(&internal_6f65f10, 0x6f660d0);
extern "C" void const* const public_6f66122 = __AsmFindLabelExport(&internal_6f65f10, 0x6f66122);
