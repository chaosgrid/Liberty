#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ad74);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ae5e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b4dc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ba3f);

#define public_6d4ba8e _public_6d4ba8e
#define public_6d4bae6 _public_6d4bae6
#define public_6d4bb18 _public_6d4bb18
#define public_6d4bb42 _public_6d4bb42
#define public_6d4bb45 _public_6d4bb45
#define public_6d4bb6d _public_6d4bb6d
#define public_6d4bb95 _public_6d4bb95
#define public_6d4bbbd _public_6d4bbbd
#define public_6d4bbcf _public_6d4bbcf
#define public_6d4bbd4 _public_6d4bbd4
#define public_6d4bbdd _public_6d4bbdd
#define public_6d4bbe0 _public_6d4bbe0
#define public_6d4bc21 _public_6d4bc21
#define public_6d4bc42 _public_6d4bc42
#define public_6d4bc49 _public_6d4bc49
#define public_6d4bc4e _public_6d4bc4e
#define public_6d4bc53 _public_6d4bc53
#define public_6d4bc5f _public_6d4bc5f
#define public_6d4bc81 _public_6d4bc81
#define public_6d4bc87 _public_6d4bc87
#define public_6d4bc95 _public_6d4bc95
#define public_6d4bccd _public_6d4bccd
#define public_6d4bcdd _public_6d4bcdd
#define public_6d4bce8 _public_6d4bce8
#define public_6d4bd25 _public_6d4bd25
#define public_6d4bd49 _public_6d4bd49
#define public_6d4bd4e _public_6d4bd4e
#define public_6d4bd55 _public_6d4bd55
#define public_6d4bd5d _public_6d4bd5d
#define public_6d4bd8b _public_6d4bd8b
#define public_6d4bd8c _public_6d4bd8c
#define public_6d4bd90 _public_6d4bd90
#define public_6d4bd95 _public_6d4bd95
#define public_6d4bda5 _public_6d4bda5

PROC_DECLARE(0x6d4ba3f, internal_6d4ba3f, public_6d4ba3f);
extern "C" NAKED register_t __cdecl internal_6d4ba3f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x154
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi+0x16C]
        mov ecx, dword ptr ds : [edi+0x174]
        mov esi, dword ptr ds : [edi+0x194]
        mov dword ptr ss : [ebp-0x10], eax
        xor eax, eax
        inc eax
        shl eax, cl
        mov dword ptr ss : [ebp-0x28], eax
        or eax, 0xFFFFFFFF
        shl eax, cl
        cmp dword ptr ds : [edi+0xFC], 0
        mov dword ptr ss : [ebp-0x2C], eax
        je public_6d4ba8e
        cmp dword ptr ds : [esi+0x34], 0
        jne public_6d4ba8e
        call public_6d4b4dc
        test al, al
        je public_6d4bd8c
        public_6d4ba8e : nop
        mov eax, dword ptr ds : [edi+0x14]
        and dword ptr ss : [ebp-0x18], 0
        mov dword ptr ss : [ebp-0x38], edi
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp-0x54], ecx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x50], eax
        mov eax, dword ptr ds : [edi+0x178]
        mov dword ptr ss : [ebp-0x4C], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [ebp+8], eax
        lea eax, ds:[esi+0x18]
        push ebx
        mov ebx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [ebp-0x34], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ds : [edi+0x168]
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-4], eax
        jne public_6d4bcdd
        jmp public_6d4bc87
        public_6d4bae6 : nop
        cmp ebx, 8
        jge public_6d4bb18
        push 0
        push ebx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4bd90
        mov ebx, dword ptr ss : [ebp-0x3C]
        cmp ebx, 8
        mov eax, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp+8], eax
        jge public_6d4bb18
        xor eax, eax
        inc eax
        jmp public_6d4bb45
        public_6d4bb18 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp-0x1C]
        lea ecx, ds:[ebx-8]
        sar eax, cl
        and eax, 0xFF
        mov ecx, dword ptr ds : [edx+eax*4+0xD4]
        test ecx, ecx
        je public_6d4bb42
        movzx eax, byte ptr ds : [eax+edx+0x4D4]
        sub ebx, ecx
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d4bb6d
        public_6d4bb42 : nop
        push 9
        pop eax
        public_6d4bb45 : nop
        push eax
        push dword ptr ss : [ebp-0x1C]
        lea eax, ss:[ebp-0x54]
        push ebx
        push dword ptr ss : [ebp+8]
        push eax
        call public_6d4ae5e
        add esp, 0x14
        test eax, eax
        mov dword ptr ss : [ebp-8], eax
        jl public_6d4bd90
        mov eax, dword ptr ss : [ebp-0x48]
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp+8], eax
        public_6d4bb6d : nop
        mov ecx, dword ptr ss : [ebp-8]
        sar ecx, 4
        and dword ptr ss : [ebp-8], 0xF
        mov dword ptr ss : [ebp-0x20], ecx
        je public_6d4bbd4
        cmp dword ptr ss : [ebp-8], 1
        je public_6d4bb95
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [eax+0x14], 0x72
        mov eax, dword ptr ds : [edi]
        push 0xFFFFFFFF
        push edi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        public_6d4bb95 : nop
        cmp ebx, 1
        jge public_6d4bbbd
        push 1
        push ebx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4bd90
        mov eax, dword ptr ss : [ebp-0x48]
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp+8], eax
        public_6d4bbbd : nop
        mov eax, dword ptr ss : [ebp+8]
        dec ebx
        mov ecx, ebx
        sar eax, cl
        test al, 1
        mov eax, dword ptr ss : [ebp-0x28]
        jne public_6d4bbcf
        mov eax, dword ptr ss : [ebp-0x2C]
        public_6d4bbcf : nop
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d4bbdd
        public_6d4bbd4 : nop
        cmp ecx, 0xF
        jne public_6d4bc95
        public_6d4bbdd : nop
        mov ecx, dword ptr ss : [ebp-4]
        public_6d4bbe0 : nop
        mov eax, dword ptr ds : [ecx*4+public_6d61270]
        mov edx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[edx+eax*2]
        cmp word ptr ds : [eax], 0
        mov dword ptr ss : [ebp-0x24], eax
        je public_6d4bc4e
        cmp ebx, 1
        jge public_6d4bc21
        push 1
        push ebx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4bd90
        mov eax, dword ptr ss : [ebp-0x48]
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x24]
        public_6d4bc21 : nop
        mov edx, dword ptr ss : [ebp+8]
        dec ebx
        mov ecx, ebx
        sar edx, cl
        test dl, 1
        je public_6d4bc53
        movsx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x28]
        test edx, ecx
        jne public_6d4bc53
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        test cx, cx
        jl public_6d4bc49
        public_6d4bc42 : nop
        add ecx, edx
        mov word ptr ds : [eax], cx
        jmp public_6d4bc53
        public_6d4bc49 : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        jmp public_6d4bc42
        public_6d4bc4e : nop
        dec dword ptr ss : [ebp-0x20]
        js public_6d4bc5f
        public_6d4bc53 : nop
        mov ecx, dword ptr ss : [ebp-4]
        inc ecx
        cmp ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-4], ecx
        jle public_6d4bbe0
        public_6d4bc5f : nop
        mov edx, dword ptr ss : [ebp-8]
        test edx, edx
        je public_6d4bc81
        mov eax, dword ptr ds : [ecx*4+public_6d61270]
        mov ecx, dword ptr ss : [ebp-0x14]
        mov word ptr ds : [ecx+eax*2], dx
        mov ecx, dword ptr ss : [ebp-0x18]
        inc dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp+ecx*4-0x154], eax
        public_6d4bc81 : nop
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        public_6d4bc87 : nop
        cmp eax, dword ptr ss : [ebp-0x10]
        jle public_6d4bae6
        jmp public_6d4bd5d
        public_6d4bc95 : nop
        xor eax, eax
        inc eax
        shl eax, cl
        test ecx, ecx
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0xC], eax
        je public_6d4bcdd
        cmp ebx, ecx
        jge public_6d4bccd
        push ecx
        push ebx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4bd90
        mov eax, dword ptr ss : [ebp-0x48]
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x1C]
        public_6d4bccd : nop
        sub ebx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, ebx
        sar edx, cl
        dec eax
        and edx, eax
        add dword ptr ss : [ebp-0xC], edx
        public_6d4bcdd : nop
        cmp dword ptr ss : [ebp-0xC], 0
        jbe public_6d4bd5d
        mov eax, dword ptr ss : [ebp-4]
        jmp public_6d4bd55
        public_6d4bce8 : nop
        mov eax, dword ptr ds : [eax*4+public_6d61270]
        mov ecx, dword ptr ss : [ebp-0x14]
        lea eax, ds:[ecx+eax*2]
        cmp word ptr ds : [eax], 0
        mov dword ptr ss : [ebp-0x24], eax
        je public_6d4bd4e
        cmp ebx, 1
        jge public_6d4bd25
        push 1
        push ebx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x54]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4bd90
        mov eax, dword ptr ss : [ebp-0x48]
        mov ebx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-0x24]
        public_6d4bd25 : nop
        mov edx, dword ptr ss : [ebp+8]
        dec ebx
        mov ecx, ebx
        sar edx, cl
        test dl, 1
        je public_6d4bd4e
        movsx ecx, word ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x28]
        test edx, ecx
        jne public_6d4bd4e
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        test cx, cx
        jge public_6d4bd49
        mov edx, dword ptr ss : [ebp-0x2C]
        public_6d4bd49 : nop
        add ecx, edx
        mov word ptr ds : [eax], cx
        public_6d4bd4e : nop
        mov eax, dword ptr ss : [ebp-4]
        inc eax
        mov dword ptr ss : [ebp-4], eax
        public_6d4bd55 : nop
        cmp eax, dword ptr ss : [ebp-0x10]
        jle public_6d4bce8
        dec dword ptr ss : [ebp-0xC]
        public_6d4bd5d : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ss : [ebp-0x4C]
        mov dword ptr ds : [edi+0x178], eax
        mov eax, dword ptr ss : [ebp+8]
        dec dword ptr ds : [esi+0x34]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [esi+0x14], ebx
        mov al, 1
        public_6d4bd8b : nop
        pop ebx
        public_6d4bd8c : nop
        pop edi
        pop esi
        leave 
        ret 
        public_6d4bd90 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        jmp public_6d4bda5
        public_6d4bd95 : nop
        mov ecx, dword ptr ss : [ebp+eax*4-0x158]
        mov edx, dword ptr ss : [ebp-0x14]
        dec eax
        and word ptr ds : [edx+ecx*2], 0
        public_6d4bda5 : nop
        test eax, eax
        jg public_6d4bd95
        xor al, al
        jmp public_6d4bd8b
        UNREACHABLE_TRAP(0x6d4ba3f)
    }
}

#undef public_6d4ba8e
#undef public_6d4bae6
#undef public_6d4bb18
#undef public_6d4bb42
#undef public_6d4bb45
#undef public_6d4bb6d
#undef public_6d4bb95
#undef public_6d4bbbd
#undef public_6d4bbcf
#undef public_6d4bbd4
#undef public_6d4bbdd
#undef public_6d4bbe0
#undef public_6d4bc21
#undef public_6d4bc42
#undef public_6d4bc49
#undef public_6d4bc4e
#undef public_6d4bc53
#undef public_6d4bc5f
#undef public_6d4bc81
#undef public_6d4bc87
#undef public_6d4bc95
#undef public_6d4bccd
#undef public_6d4bcdd
#undef public_6d4bce8
#undef public_6d4bd25
#undef public_6d4bd49
#undef public_6d4bd4e
#undef public_6d4bd55
#undef public_6d4bd5d
#undef public_6d4bd8b
#undef public_6d4bd8c
#undef public_6d4bd90
#undef public_6d4bd95
#undef public_6d4bda5
