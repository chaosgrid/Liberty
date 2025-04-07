#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b270);
CLANG_FORWARD_PROC_SYMBOL(public_6d276f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d42160);
CLANG_FORWARD_PROC_SYMBOL(public_6d425d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d42750);
CLANG_FORWARD_PROC_SYMBOL(public_6d42760);
CLANG_FORWARD_PROC_SYMBOL(public_6d427b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43160);
CLANG_FORWARD_PROC_SYMBOL(public_6d6022a);

#define public_6d421bf _public_6d421bf
#define public_6d4220a _public_6d4220a
#define public_6d42227 _public_6d42227
#define public_6d42260 _public_6d42260
#define public_6d42275 _public_6d42275
#define public_6d422c0 _public_6d422c0
#define public_6d422ed _public_6d422ed
#define public_6d422f6 _public_6d422f6
#define public_6d42327 _public_6d42327
#define public_6d42330 _public_6d42330
#define public_6d42387 _public_6d42387
#define public_6d42389 _public_6d42389
#define public_6d42395 _public_6d42395
#define public_6d423a9 _public_6d423a9
#define public_6d423f2 _public_6d423f2
#define public_6d42408 _public_6d42408
#define public_6d42414 _public_6d42414
#define public_6d42428 _public_6d42428
#define public_6d42430 _public_6d42430
#define public_6d42460 _public_6d42460
#define public_6d42477 _public_6d42477
#define public_6d42494 _public_6d42494
#define public_6d424a9 _public_6d424a9
#define public_6d424af _public_6d424af
#define public_6d424c7 _public_6d424c7
#define public_6d4250c _public_6d4250c
#define public_6d42514 _public_6d42514
#define public_6d42522 _public_6d42522
#define public_6d4252a _public_6d4252a
#define public_6d42536 _public_6d42536
#define public_6d4253e _public_6d4253e
#define public_6d42553 _public_6d42553
#define public_6d4255b _public_6d4255b
#define public_6d42563 _public_6d42563
#define public_6d42580 _public_6d42580
#define public_6d4259f _public_6d4259f
#define public_6d425a2 _public_6d425a2

PROC_DECLARE(0x6d42160, internal_6d42160, public_6d42160);
extern "C" NAKED register_t __cdecl internal_6d42160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6d6a240 @0x6d42165*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6a240
/*FIXUP push offset _public_6d6022a @0x6d4216a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d6022a
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD0
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ss : [ebp+0xC]
        mov cl, byte ptr ds : [eax+0xD]
        mov byte ptr ss : [ebp-0x19], cl
        xor ecx, ecx
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0x24], edx
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [ebp-0x2C], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ss : [ebp-0x28], edx
        mov ebx, dword ptr ss : [ebp+0x10]
        cmp dword ptr ds : [ebx+0x14], ecx
        mov dword ptr ss : [ebp-0x30], offset _public_6d425d0
        jne public_6d421bf
        mov dword ptr ss : [ebp-0x30], offset public_6d42f10
        public_6d421bf : nop
        mov edx, dword ptr ds : [eax+0x58]
        mov dword ptr ss : [ebp-0x34], edx
        mov dword ptr ss : [ebp-0x54], ecx
        mov dword ptr ss : [ebp-0x50], ecx
        mov byte ptr ss : [ebp-0x4C], 0
        mov dword ptr ss : [ebp-0x48], ecx
        mov dword ptr ss : [ebp-0x44], ecx
        mov byte ptr ss : [ebp-0x40], 0
        mov dword ptr ss : [ebp-0x3C], ecx
        mov dword ptr ss : [ebp-0x38], ecx
        mov esi, dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [ebx]
        mov ecx, edi
        call public_6d1b270
        mov ecx, edi
        cmp eax, esi
        jae public_6d4220a
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d1b270
        sub esi, eax
        push esi
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, edi
        call public_6d427b0
        jmp public_6d42227
        public_6d4220a : nop
        call public_6d1b270
        cmp esi, eax
        jae public_6d42227
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        shl esi, 5
        add esi, ecx
        push esi
        mov ecx, edi
        call public_6d42760
        public_6d42227 : nop
        xor edi, edi
        mov dword ptr ss : [ebp-0x58], edi
        mov dword ptr ss : [ebp-0x5C], edi
        lea ecx, ss:[ebp-0x58]
        push ecx
        lea edx, ss:[ebp-0x5C]
        push edx
        lea ecx, ss:[ebp-0x7C]
        call public_6d31b70
        mov byte ptr ss : [ebp-0x74], 0
        mov dword ptr ss : [ebp-0x70], edi
        mov dword ptr ss : [ebp-0x6C], edi
        mov byte ptr ss : [ebp-0x68], 0
        mov dword ptr ss : [ebp-0x64], edi
        mov dword ptr ss : [ebp-0x60], edi
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edx
        je public_6d42275
        nop 
        public_6d42260 : nop
        mov ecx, 8
        lea esi, ss:[ebp-0x7C]
        mov edi, eax
        rep movsd
        add eax, 0x20
        cmp eax, edx
        jne public_6d42260
        xor edi, edi
        public_6d42275 : nop
        mov dword ptr ss : [ebp-4], edi
        mov al, byte ptr ss : [ebp+0x14]
        test al, al
        jne public_6d42327
        mov esi, dword ptr ds : [ebx+0xC]
        push esi
        mov eax, dword ptr ds : [ebx+8]
        push eax
        call public_6d276f0
        add esp, 8
        mov ecx, dword ptr ss : [ebp-0x2C]
        cmp ecx, eax
        ja public_6d42389
        mov dword ptr ss : [ebp-0x80], esi
        neg ecx
        push ecx
        lea ecx, ss:[ebp-0x80]
        push ecx
        call public_6d42750
        add esp, 8
        test byte ptr ss : [ebp-0x24], 0x10
        je public_6d422ed
        mov esi, dword ptr ss : [ebp-0x80]
        mov dword ptr ss : [ebp-0x84], esi
        nop 
        public_6d422c0 : nop
        cmp esi, dword ptr ds : [ebx+8]
        jb public_6d42389
        push esi
        push ebx
        mov edx, dword ptr ss : [ebp-0x34]
        push edx
        call dword ptr ss : [ebp-0x30]
        add esp, 0xC
        test al, al
        jne public_6d42387
        sub esi, 2
        mov dword ptr ss : [ebp-0x84], esi
        mov byte ptr ds : [ebx+0x1C], al
        xor edi, edi
        jmp public_6d422c0
        public_6d422ed : nop
        mov esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp-0x88], esi
        public_6d422f6 : nop
        cmp esi, dword ptr ss : [ebp-0x80]
        ja public_6d42389
        push esi
        push ebx
        mov eax, dword ptr ss : [ebp-0x34]
        push eax
        call dword ptr ss : [ebp-0x30]
        add esp, 0xC
        test al, al
        jne public_6d42387
        mov al, byte ptr ss : [ebp-0x19]
        test al, al
        je public_6d42387
        add esi, 2
        mov dword ptr ss : [ebp-0x88], esi
        mov byte ptr ds : [ebx+0x1C], 0
        xor edi, edi
        jmp public_6d422f6
        public_6d42327 : nop
        mov esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp-0x8C], esi
        public_6d42330 : nop
        push esi
        push ebx
        mov ecx, dword ptr ss : [ebp-0x34]
        push ecx
        call dword ptr ss : [ebp-0x30]
        add esp, 0xC
        test al, al
        jne public_6d42387
        mov al, byte ptr ss : [ebp-0x19]
        test al, al
        je public_6d42387
        mov dword ptr ss : [ebp-0x90], 0
        lea edx, ss:[ebp-0x90]
        push edx
        call dword ptr ds : [public_6d64b2c]
        mov dword ptr ss : [ebp-0x94], eax
        push esi
        lea eax, ss:[ebp-0x94]
        push eax
        call dword ptr ds : [public_6d64b28]
        add esp, 0xC
        test al, al
        jne public_6d42387
        add esi, 2
        mov dword ptr ss : [ebp-0x8C], esi
        mov byte ptr ds : [ebx+0x1C], al
        jmp public_6d42330
        public_6d42387 : nop
        xor edi, edi
        public_6d42389 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_6d42414
        public_6d42395 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        xor ecx, ecx
        cmp eax, 0xC00000FD
        sete cl
        mov eax, ecx
        ret 
        public_6d423a9 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        call public_6d43160
        xor eax, eax
        mov dword ptr ss : [ebp-0xB4], eax
        mov dword ptr ss : [ebp-0xB0], eax
        mov byte ptr ss : [ebp-0xAC], al
        mov dword ptr ss : [ebp-0xA8], eax
        mov dword ptr ss : [ebp-0xA4], eax
        mov byte ptr ss : [ebp-0xA0], al
        mov dword ptr ss : [ebp-0x9C], eax
        mov dword ptr ss : [ebp-0x98], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, edx
        je public_6d42408
        public_6d423f2 : nop
        mov ecx, 8
        lea esi, ss:[ebp-0xB4]
        mov edi, eax
        rep movsd
        add eax, 0x20
        cmp eax, edx
        jne public_6d423f2
        public_6d42408 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ebx, dword ptr ss : [ebp+0x10]
        xor edi, edi
        public_6d42414 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [ecx]
        mov edx, eax
        cmp eax, ecx
        je public_6d424c7
        jmp public_6d42430
        public_6d42428 : nop
        mov edx, dword ptr ss : [ebp-0xB8]
        mov edi, edi
        public_6d42430 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0xB8], esi
        mov eax, dword ptr ds : [eax+8]
        mov edx, eax
        cmp esi, ecx
        mov ecx, dword ptr ds : [ebx]
        jne public_6d42477
        mov ebx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx+4]
        sub edx, dword ptr ss : [ebp-0x20]
        shl edx, 5
        add edx, ecx
        inc eax
        shl eax, 5
        add eax, ecx
        cmp eax, ebx
        je public_6d424af
        nop 
        lea esp, ss:[esp]
        public_6d42460 : nop
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        add edx, 0x20
        add eax, 0x20
        cmp eax, ebx
        jne public_6d42460
        jmp public_6d424a9
        public_6d42477 : nop
        mov ecx, dword ptr ds : [ecx+4]
        sub edx, dword ptr ss : [ebp-0x20]
        shl edx, 5
        add edx, ecx
        mov ebx, dword ptr ds : [esi+8]
        shl ebx, 5
        add ebx, ecx
        inc eax
        shl eax, 5
        add eax, ecx
        cmp eax, ebx
        je public_6d424af
        public_6d42494 : nop
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        add edx, 0x20
        add eax, 0x20
        cmp eax, ebx
        jne public_6d42494
        public_6d424a9 : nop
        mov esi, dword ptr ss : [ebp-0xB8]
        public_6d424af : nop
        mov eax, esi
        inc dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [edx+0x60]
        mov ebx, dword ptr ss : [ebp+0x10]
        cmp esi, ecx
        jne public_6d42428
        xor edi, edi
        public_6d424c7 : nop
        mov dword ptr ss : [ebp-0xD8], edi
        mov dword ptr ss : [ebp-0xD4], edi
        mov byte ptr ss : [ebp-0xD0], 0
        mov dword ptr ss : [ebp-0xCC], edi
        mov dword ptr ss : [ebp-0xC8], edi
        mov byte ptr ss : [ebp-0xC4], 0
        mov dword ptr ss : [ebp-0xC0], edi
        mov dword ptr ss : [ebp-0xBC], edi
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-0xDC], ecx
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        jne public_6d4250c
        xor eax, eax
        jmp public_6d42514
        public_6d4250c : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 5
        public_6d42514 : nop
        sub eax, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, edi
        jne public_6d42522
        xor esi, esi
        jmp public_6d4252a
        public_6d42522 : nop
        mov esi, dword ptr ds : [ecx+8]
        sub esi, edx
        sar esi, 5
        public_6d4252a : nop
        cmp esi, eax
        jae public_6d42553
        cmp edx, edi
        jne public_6d42536
        xor esi, esi
        jmp public_6d4253e
        public_6d42536 : nop
        mov esi, dword ptr ds : [ecx+8]
        sub esi, edx
        sar esi, 5
        public_6d4253e : nop
        lea edx, ss:[ebp-0xD8]
        push edx
        sub eax, esi
        push eax
        mov eax, dword ptr ds : [ecx+8]
        push eax
        call public_6d427b0
        jmp public_6d425a2
        public_6d42553 : nop
        cmp edx, edi
        jne public_6d4255b
        xor esi, esi
        jmp public_6d42563
        public_6d4255b : nop
        mov esi, dword ptr ds : [ecx+8]
        sub esi, edx
        sar esi, 5
        public_6d42563 : nop
        cmp eax, esi
        jae public_6d425a2
        mov esi, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0xE0], esi
        shl eax, 5
        add eax, edx
        mov edx, eax
        mov eax, esi
        cmp eax, esi
        je public_6d4259f
        lea ecx, ds:[ecx]
        public_6d42580 : nop
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        add edx, 0x20
        add eax, 0x20
        cmp eax, dword ptr ss : [ebp-0xE0]
        jne public_6d42580
        mov ecx, dword ptr ss : [ebp-0xDC]
        public_6d4259f : nop
        mov dword ptr ds : [ecx+8], edx
        public_6d425a2 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, 8
        mov esi, dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [ebp+8]
        mov edi, eax
        rep movsd
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d42160)
        ASM_EXPORT_ENTRY_FIRST(0x6d42395, public_6d42395)
        ASM_EXPORT_ENTRY_LAST(0x6d423a9, public_6d423a9)
    }
}

#undef public_6d421bf
#undef public_6d4220a
#undef public_6d42227
#undef public_6d42260
#undef public_6d42275
#undef public_6d422c0
#undef public_6d422ed
#undef public_6d422f6
#undef public_6d42327
#undef public_6d42330
#undef public_6d42387
#undef public_6d42389
#undef public_6d42395
#undef public_6d423a9
#undef public_6d423f2
#undef public_6d42408
#undef public_6d42414
#undef public_6d42428
#undef public_6d42430
#undef public_6d42460
#undef public_6d42477
#undef public_6d42494
#undef public_6d424a9
#undef public_6d424af
#undef public_6d424c7
#undef public_6d4250c
#undef public_6d42514
#undef public_6d42522
#undef public_6d4252a
#undef public_6d42536
#undef public_6d4253e
#undef public_6d42553
#undef public_6d4255b
#undef public_6d42563
#undef public_6d42580
#undef public_6d4259f
#undef public_6d425a2

#pragma init_seg(compiler)
extern "C" void const* const public_6d42395 = __AsmFindLabelExport(&internal_6d42160, 0x6d42395);
extern "C" void const* const public_6d423a9 = __AsmFindLabelExport(&internal_6d42160, 0x6d423a9);
