#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_576410);
CLANG_FORWARD_PROC_SYMBOL(public_577680);

#define public_57769f _public_57769f
#define public_5776a6 _public_5776a6
#define public_5776ad _public_5776ad
#define public_5776b4 _public_5776b4
#define public_5776bb _public_5776bb
#define public_5776c2 _public_5776c2
#define public_5776c9 _public_5776c9
#define public_5776d0 _public_5776d0
#define public_5776d7 _public_5776d7
#define public_5776dc _public_5776dc
#define public_57770f _public_57770f
#define public_57771a _public_57771a
#define public_577725 _public_577725
#define public_57773a _public_57773a
#define public_577742 _public_577742
#define public_577768 _public_577768
#define public_577780 _public_577780
#define public_577790 _public_577790
#define public_5777cd _public_5777cd
#define public_5777e8 _public_5777e8
#define public_5777fa _public_5777fa
#define public_57780c _public_57780c
#define public_57781a _public_57781a

PROC_DECLARE(0x577680, internal_577680, public_577680);
extern "C" NAKED register_t __cdecl internal_577680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+4]
        add eax, 9
        xor ebx, ebx
        xor ebp, ebp
        cmp eax, 8
        push edi
        ja public_5776dc
/*FIXUP jmp dword ptr ds : [eax*4+public_577824] @0x577698*/
  JMPTB cmp eax, 0
  JMPTB je public_5776d7
  JMPTB cmp eax, 1
  JMPTB je public_5776d0
  JMPTB cmp eax, 2
  JMPTB je public_5776c9
  JMPTB cmp eax, 3
  JMPTB je public_5776c2
  JMPTB cmp eax, 4
  JMPTB je public_5776bb
  JMPTB cmp eax, 5
  JMPTB je public_5776b4
  JMPTB cmp eax, 6
  JMPTB je public_5776ad
  JMPTB cmp eax, 7
  JMPTB je public_5776a6
  JMPTB cmp eax, 8
  JMPTB je public_57769f
  JMPTB int 3
        public_57769f : nop
        mov ebp, 6
        jmp public_5776dc
        public_5776a6 : nop
        mov ebp, 7
        jmp public_5776dc
        public_5776ad : nop
        mov ebp, 8
        jmp public_5776dc
        public_5776b4 : nop
        mov ebp, 9
        jmp public_5776dc
        public_5776bb : nop
        mov ebp, 0xA
        jmp public_5776dc
        public_5776c2 : nop
        mov ebp, 0xB
        jmp public_5776dc
        public_5776c9 : nop
        mov ebp, 0xC
        jmp public_5776dc
        public_5776d0 : nop
        mov ebp, 0xD
        jmp public_5776dc
        public_5776d7 : nop
        mov ebp, 4
        public_5776dc : nop
        mov ecx, 7
        mov edi, offset public_67c278
        rep movsd
        mov edi, dword ptr ds : [public_5c7280]
        push 0x10
        mov dword ptr ds : [public_67c284], ebx
        mov dword ptr ds : [public_67c288], ebx
        mov dword ptr ds : [public_67c28c], ebx
        xor esi, esi
        call edi
        test ah, ah
        jns public_57770f
        mov esi, 1
        public_57770f : nop
        push 0x11
        call edi
        test ah, ah
        jns public_57771a
        or esi, 4
        public_57771a : nop
        push 0x12
        call edi
        test ah, ah
        jns public_577725
        or esi, 0x10
        public_577725 : nop
        push 2
        push ebp
        mov dword ptr ds : [public_67c280], esi
        call public_576410
        add esp, 8
        test al, al
        je public_577742
        public_57773a : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_577742 : nop
        cmp dword ptr ds : [public_67c27c], ebx
        je public_57781a
        mov esi, dword ptr ds : [public_67c21c]
        mov ebx, dword ptr ds : [esi]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x18], ebx
        je public_57781a
        mov ecx, dword ptr ds : [public_67c290]
        public_577768 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [edx+0x14]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], edx
        je public_57780c
        lea esp, ss:[esp]
        public_577780 : nop
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+0x14]
        cmp esi, dword ptr ds : [edi+0x18]
        je public_5777fa
        nop 
        lea esp, ss:[esp]
        public_577790 : nop
        mov eax, dword ptr ds : [public_67c27c]
        cmp dword ptr ds : [esi], eax
        jne public_5777e8
        mov eax, dword ptr ds : [edi+0xC]
        xor edx, edx
        test cl, cl
        sete dl
        inc edx
        test eax, edx
        je public_5777e8
        mov dl, ch
        neg dl
        mov ebx, eax
        not ebx
        sbb edx, edx
        and edx, 4
        test ebx, edx
        jne public_5777e8
        test al, 8
        jne public_5777cd
        mov eax, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [public_67c280]
        sete al
        test al, al
        je public_5777e8
        public_5777cd : nop
        mov ecx, dword ptr ds : [edi]
        push 2
        push ecx
        call public_576410
        add esp, 8
        test al, al
        jne public_57773a
        mov ecx, dword ptr ds : [public_67c290]
        public_5777e8 : nop
        mov eax, dword ptr ds : [edi+0x18]
        add esi, 8
        cmp esi, eax
        jne public_577790
        mov ebx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        public_5777fa : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edx+0x14]
        jne public_577780
        mov esi, dword ptr ds : [public_67c21c]
        public_57780c : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x18], ebx
        jne public_577768
        public_57781a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x577680)
        ASM_EXPORT_ENTRY_SINGLE(0x57769f, public_57769f)
    }
}

#undef public_57769f
#undef public_5776a6
#undef public_5776ad
#undef public_5776b4
#undef public_5776bb
#undef public_5776c2
#undef public_5776c9
#undef public_5776d0
#undef public_5776d7
#undef public_5776dc
#undef public_57770f
#undef public_57771a
#undef public_577725
#undef public_57773a
#undef public_577742
#undef public_577768
#undef public_577780
#undef public_577790
#undef public_5777cd
#undef public_5777e8
#undef public_5777fa
#undef public_57780c
#undef public_57781a

#pragma init_seg(compiler)
extern "C" void const* const public_57769f = __AsmFindLabelExport(&internal_577680, 0x57769f);
