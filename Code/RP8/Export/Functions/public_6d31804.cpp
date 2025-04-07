#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a4);
CLANG_FORWARD_PROC_SYMBOL(public_6d317c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317dd);
CLANG_FORWARD_PROC_SYMBOL(public_6d317de);
CLANG_FORWARD_PROC_SYMBOL(public_6d317f3);
CLANG_FORWARD_PROC_SYMBOL(public_6d31804);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fc2d);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fced);
CLANG_FORWARD_PROC_SYMBOL(public_6d3feff);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ffa6);
CLANG_FORWARD_PROC_SYMBOL(public_6d400b2);
CLANG_FORWARD_PROC_SYMBOL(public_6d40136);
CLANG_FORWARD_PROC_SYMBOL(public_6d40278);
CLANG_FORWARD_PROC_SYMBOL(public_6d41ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6d41d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf0e);

#define public_6d3184f _public_6d3184f
#define public_6d31859 _public_6d31859
#define public_6d318da _public_6d318da
#define public_6d3191e _public_6d3191e
#define public_6d3192c _public_6d3192c
#define public_6d31960 _public_6d31960
#define public_6d3196a _public_6d3196a
#define public_6d319b1 _public_6d319b1
#define public_6d319b4 _public_6d319b4
#define public_6d319f8 _public_6d319f8
#define public_6d31a02 _public_6d31a02
#define public_6d31a25 _public_6d31a25
#define public_6d31a3d _public_6d31a3d
#define public_6d31a41 _public_6d31a41
#define public_6d31a4f _public_6d31a4f
#define public_6d31a5c _public_6d31a5c
#define public_6d31a5e _public_6d31a5e

PROC_DECLARE(0x6d31804, internal_6d31804, public_6d31804);
extern "C" NAKED register_t __cdecl internal_6d31804()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x274
        push ebx
        push esi
        lea eax, ss:[ebp-0x274]
        push edi
        push eax
        mov dword ptr ss : [ebp-8], ecx
        call public_6d41d5a
        mov dword ptr ss : [ebp-0x1B0], eax
        xor esi, esi
        lea eax, ss:[ebp-0x1F0]
        push esi
        push eax
        mov dword ptr ss : [ebp-0x274], offset _public_6d317a4
        mov dword ptr ss : [ebp-0x26C], offset _public_6d317dd
        call public_6d5cf0e
        add esp, 0xC
        test eax, eax
        je public_6d31859
        public_6d3184f : nop
        mov esi, 0x80004005
        jmp public_6d31a5e
        public_6d31859 : nop
        push 0x1A8
        lea eax, ss:[ebp-0x1B0]
        push 0x3D
        push eax
        call public_6d3fc2d
        push 0x24
        lea eax, ss:[ebp-0x1B0]
        push esi
        push eax
        mov eax, dword ptr ss : [ebp-0x1AC]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x19C], eax
        mov dword ptr ds : [eax+0x20], ecx
        mov ecx, dword ptr ss : [ebp+8]
        xor edi, edi
        mov dword ptr ds : [eax+8], offset _public_6d317dd
        mov dword ptr ds : [eax+0xC], offset _public_6d317de
        mov dword ptr ds : [eax+0x10], offset _public_6d317f3
        mov dword ptr ds : [eax+0x14], offset _public_6d41ad0
        mov dword ptr ds : [eax+0x18], offset _public_6d317dd
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+0x1C], ecx
        inc edi
        lea eax, ss:[ebp-0x1B0]
        push edi
        push eax
        call public_6d3ffa6
        add esp, 0x20
        call public_6d40278
        test eax, eax
        jne public_6d318da
        mov dword ptr ss : [ebp-0x16C], edi
        public_6d318da : nop
        lea eax, ss:[ebp-0x1B0]
        push eax
        mov dword ptr ss : [ebp-0x26C], offset _public_6d317c0
        call public_6d40136
        mov eax, dword ptr ss : [ebp-0x148]
        dec eax
        pop ecx
        push 0x32
        pop ebx
        je public_6d3191e
        dec eax
        dec eax
        jne public_6d3184f
        mov eax, dword ptr ss : [ebp-0x154]
        mov esi, dword ptr ss : [ebp-8]
        mov ecx, eax
        shl ecx, 2
        mov dword ptr ds : [esi], 0x16
        mov dword ptr ds : [esi+0x30], ecx
        jmp public_6d3192c
        public_6d3191e : nop
        mov esi, dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-0x154]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+0x30], eax
        public_6d3192c : nop
        and dword ptr ds : [esi+0x34], 0
        cmp dword ptr ds : [esi+0x40], 0
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [ebp-0x150]
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], edi
        je public_6d31a5c
        mov ecx, dword ptr ds : [esi+0x30]
        imul ecx, eax
        push ecx
        mov dword ptr ds : [esi+0x38], edi
        call public_6d2f2a0
        test eax, eax
        pop ecx
        mov dword ptr ds : [esi+4], eax
        jne public_6d3196a
        public_6d31960 : nop
        mov esi, 0x8007000E
        jmp public_6d31a5e
        public_6d3196a : nop
        mov eax, dword ptr ss : [ebp-0x154]
        imul eax, dword ptr ss : [ebp-0x148]
        push edi
        push eax
        lea eax, ss:[ebp-0x1B0]
        push edi
        push eax
        mov eax, dword ptr ss : [ebp-0x1AC]
        call dword ptr ds : [eax+8]
        add esp, 0x10
        test eax, eax
        mov dword ptr ss : [ebp-4], eax
        je public_6d31960
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_6d319f8
        mov eax, dword ptr ss : [ebp-0x138]
        cmp eax, dword ptr ss : [ebp-0x150]
        mov ebx, dword ptr ds : [esi+4]
        jae public_6d31a4f
        jmp public_6d319b4
        public_6d319b1 : nop
        xor edi, edi
        inc edi
        public_6d319b4 : nop
        push edi
        push dword ptr ss : [ebp-4]
        lea eax, ss:[ebp-0x1B0]
        push eax
        call public_6d400b2
        mov ecx, dword ptr ss : [ebp-0x154]
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ds : [eax]
        mov eax, ecx
        shr ecx, 2
        mov edi, ebx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp-0x138]
        add ebx, dword ptr ss : [ebp-0x154]
        add esp, 0xC
        cmp eax, dword ptr ss : [ebp-0x150]
        jb public_6d319b1
        jmp public_6d31a4f
        public_6d319f8 : nop
        cmp eax, 0x16
        jne public_6d31a4f
        mov esi, dword ptr ds : [esi+4]
        jmp public_6d31a41
        public_6d31a02 : nop
        push edi
        push dword ptr ss : [ebp-4]
        lea eax, ss:[ebp-0x1B0]
        push eax
        call public_6d400b2
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x154]
        mov eax, dword ptr ds : [eax]
        add esp, 0xC
        lea ecx, ds:[esi+ecx*4]
        jmp public_6d31a3d
        public_6d31a25 : nop
        movzx ebx, byte ptr ds : [eax+2]
        xor edx, edx
        mov dh, byte ptr ds : [eax]
        mov dl, byte ptr ds : [eax+1]
        shl edx, 8
        or edx, ebx
        mov dword ptr ds : [esi], edx
        add esi, 4
        add eax, 3
        public_6d31a3d : nop
        cmp esi, ecx
        jb public_6d31a25
        public_6d31a41 : nop
        mov eax, dword ptr ss : [ebp-0x138]
        cmp eax, dword ptr ss : [ebp-0x150]
        jb public_6d31a02
        public_6d31a4f : nop
        lea eax, ss:[ebp-0x1B0]
        push eax
        call public_6d3feff
        pop ecx
        public_6d31a5c : nop
        xor esi, esi
        public_6d31a5e : nop
        lea eax, ss:[ebp-0x1B0]
        push eax
        call public_6d3fced
        pop ecx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d31804)
    }
}

#undef public_6d3184f
#undef public_6d31859
#undef public_6d318da
#undef public_6d3191e
#undef public_6d3192c
#undef public_6d31960
#undef public_6d3196a
#undef public_6d319b1
#undef public_6d319b4
#undef public_6d319f8
#undef public_6d31a02
#undef public_6d31a25
#undef public_6d31a3d
#undef public_6d31a41
#undef public_6d31a4f
#undef public_6d31a5c
#undef public_6d31a5e
