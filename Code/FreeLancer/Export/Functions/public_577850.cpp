#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576410);
CLANG_FORWARD_PROC_SYMBOL(public_576550);
CLANG_FORWARD_PROC_SYMBOL(public_577850);
CLANG_FORWARD_PROC_SYMBOL(public_578580);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_577884 _public_577884
#define public_5778ac _public_5778ac
#define public_5778db _public_5778db
#define public_5778ea _public_5778ea
#define public_5778f1 _public_5778f1
#define public_57791f _public_57791f
#define public_57792a _public_57792a
#define public_577935 _public_577935
#define public_57794e _public_57794e
#define public_577958 _public_577958
#define public_57796f _public_57796f
#define public_5779eb _public_5779eb
#define public_5779f9 _public_5779f9
#define public_577a00 _public_577a00
#define public_577a46 _public_577a46
#define public_577a48 _public_577a48
#define public_577a4c _public_577a4c
#define public_577a70 _public_577a70
#define public_577a80 _public_577a80
#define public_577a90 _public_577a90
#define public_577abe _public_577abe
#define public_577ad4 _public_577ad4
#define public_577ae2 _public_577ae2
#define public_577aec _public_577aec
#define public_577afd _public_577afd
#define public_577b09 _public_577b09
#define public_577b13 _public_577b13

PROC_DECLARE(0x577850, internal_577850, public_577850);
extern "C" NAKED register_t __cdecl internal_577850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x14
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        lea ecx, ds:[edx-0x100]
        cmp ecx, 5
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 1
        mov byte ptr ds : [public_67c291], 0
        ja public_577b13
        mov eax, dword ptr ss : [esp+0x30]
/*FIXUP jmp dword ptr ds : [ecx*4+public_577b20] @0x57787d*/
  JMPTB cmp ecx, 0
  JMPTB je public_577884
  JMPTB cmp ecx, 1
  JMPTB je public_5778ac
  JMPTB cmp ecx, 2
  JMPTB je public_5778db
  JMPTB cmp ecx, 3
  JMPTB je public_577b13
  JMPTB cmp ecx, 4
  JMPTB je public_577884
  JMPTB cmp ecx, 5
  JMPTB je public_5778ac
  JMPTB int 3
        public_577884 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [public_67c27c], ecx
        mov ecx, eax
        and ecx, 0xF0000000
        cmp ecx, 0x40000000
        sete cl
        mov byte ptr ds : [public_67c291], cl
        mov ebx, 1
        jmp public_5778ea
        public_5778ac : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [public_67c27c], ecx
        mov ecx, eax
        and ecx, 0xF0000000
        cmp ecx, 0x40000000
        sete cl
        mov byte ptr ds : [public_67c290], 0
        mov byte ptr ds : [public_67c291], cl
        mov ebx, 1
        jmp public_5778f1
        public_5778db : nop
        mov dword ptr ds : [public_67c27c], 0
        mov ebx, 2
        public_5778ea : nop
        mov byte ptr ds : [public_67c290], 1
        public_5778f1 : nop
        mov edi, dword ptr ds : [public_5c7280]
        mov dword ptr ds : [public_67c284], edx
        mov edx, dword ptr ss : [esp+0x2C]
        push 0x10
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [public_67c288], edx
        mov dword ptr ds : [public_67c28c], eax
        xor esi, esi
        call edi
        test ah, ah
        jns public_57791f
        mov esi, 1
        public_57791f : nop
        push 0x11
        call edi
        test ah, ah
        jns public_57792a
        or esi, 4
        public_57792a : nop
        push 0x12
        call edi
        test ah, ah
        jns public_577935
        or esi, 0x10
        public_577935 : nop
        test ebx, ebx
        mov dword ptr ds : [public_67c280], esi
        je public_577b13
        jle public_57794e
        cmp ebx, 2
        jg public_57794e
        push 1
        jmp public_577958
        public_57794e : nop
        mov dword ptr ss : [esp+0x10], 2
        push 2
        public_577958 : nop
        push ebx
        call public_576410
        add esp, 8
        test al, al
        je public_57796f
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 
        public_57796f : nop
        mov esi, dword ptr ds : [public_67c27c]
        test esi, esi
        je public_577afd
        cmp ebx, 1
        mov eax, dword ptr ds : [public_67c280]
        mov byte ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x20], eax
        jne public_577a4c
        cmp esi, 0x10
        je public_577a4c
        cmp esi, 0x11
        je public_577a4c
        cmp esi, 0x12
        je public_577a4c
        mov cl, byte ptr ds : [public_67c291]
        test cl, cl
        jne public_577a4c
        mov cl, byte ptr ds : [public_67c290]
        test cl, cl
        je public_5779eb
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_67c264]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_67c260
        mov dword ptr ss : [esp+0x20], esi
        call public_578580
        jmp public_577a4c
        public_5779eb : nop
        mov edx, dword ptr ds : [public_67c264]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_577a4c
        jmp public_577a00
        public_5779f9 : nop
        mov esi, dword ptr ds : [public_67c27c]
        nop 
        public_577a00 : nop
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_577a48
        cmp ecx, esi
        jne public_577a46
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [public_67c280], ecx
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67c268]
        mov edx, dword ptr ds : [public_67c264]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_67c268], eax
        mov eax, esi
        mov byte ptr ss : [esp+0x28], 1
        jmp public_577a48
        public_577a46 : nop
        mov eax, dword ptr ds : [eax]
        public_577a48 : nop
        cmp eax, edx
        jne public_5779f9
        public_577a4c : nop
        mov eax, dword ptr ds : [public_67c27c]
        test eax, eax
        je public_577aec
        mov esi, dword ptr ds : [public_67c21c]
        mov edx, dword ptr ds : [esi]
        cmp edx, esi
        mov dword ptr ss : [esp+0x14], edx
        je public_577aec
        lea ecx, ds:[ecx]
        public_577a70 : nop
        mov ecx, dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [ecx+0x14]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x1C], ecx
        je public_577ae2
        public_577a80 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, dword ptr ds : [edi+0x18]
        je public_577ad4
        nop 
        lea esp, ss:[esp]
        public_577a90 : nop
        mov eax, dword ptr ds : [public_67c27c]
        cmp dword ptr ds : [esi], eax
        jne public_577abe
/*FIXUP push offset public_67c278 @0x577a99*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c278
        push esi
        mov ecx, edi
        call public_576550
        test al, al
        je public_577abe
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi]
        push ecx
        push edx
        call public_576410
        add esp, 8
        test al, al
        jne public_577b09
        public_577abe : nop
        mov eax, dword ptr ds : [edi+0x18]
        add esi, 8
        cmp esi, eax
        jne public_577a90
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x30]
        public_577ad4 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ecx+0x14]
        jne public_577a80
        mov esi, dword ptr ds : [public_67c21c]
        public_577ae2 : nop
        mov edx, dword ptr ds : [edx]
        cmp edx, esi
        mov dword ptr ss : [esp+0x14], edx
        jne public_577a70
        public_577aec : nop
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_577afd
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [public_67c280], eax
        public_577afd : nop
        cmp ebx, 1
        jne public_577b13
        cmp dword ptr ss : [esp+0x2C], 0x12
        jne public_577b13
        public_577b09 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 
        public_577b13 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x577850)
        ASM_EXPORT_ENTRY_SINGLE(0x5778ac, public_5778ac)
    }
}

#undef public_577884
#undef public_5778ac
#undef public_5778db
#undef public_5778ea
#undef public_5778f1
#undef public_57791f
#undef public_57792a
#undef public_577935
#undef public_57794e
#undef public_577958
#undef public_57796f
#undef public_5779eb
#undef public_5779f9
#undef public_577a00
#undef public_577a46
#undef public_577a48
#undef public_577a4c
#undef public_577a70
#undef public_577a80
#undef public_577a90
#undef public_577abe
#undef public_577ad4
#undef public_577ae2
#undef public_577aec
#undef public_577afd
#undef public_577b09
#undef public_577b13

#pragma init_seg(compiler)
extern "C" void const* const public_5778ac = __AsmFindLabelExport(&internal_577850, 0x5778ac);
