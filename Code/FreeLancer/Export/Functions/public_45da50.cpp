#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45da50);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);

#define public_45da72 _public_45da72
#define public_45da79 _public_45da79
#define public_45da7e _public_45da7e
#define public_45db0f _public_45db0f
#define public_45db20 _public_45db20
#define public_45db97 _public_45db97
#define public_45dbc7 _public_45dbc7
#define public_45dbd5 _public_45dbd5
#define public_45dc4c _public_45dc4c

PROC_DECLARE(0x45da50, internal_45da50, public_45da50);
extern "C" NAKED register_t __cdecl internal_45da50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x30
        sub eax, 0
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        je public_45da79
        dec eax
        je public_45da72
        dec eax
        jne public_45dc4c
        mov ebp, offset public_5cee08
        jmp public_45da7e
        public_45da72 : nop
        mov ebp, offset public_5cedd8
        jmp public_45da7e
        public_45da79 : nop
        mov ebp, offset public_5ceb1c
        public_45da7e : nop
        mov eax, dword ptr ds : [ebx+0x384]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov ecx, dword ptr ds : [eax+0x84]
        cmp ecx, 0xFFFFFFFF
        push edi
        je public_45db0f
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x10]
        rep movsd
        public_45db0f : nop
        mov eax, dword ptr ds : [ebx+0x384]
        mov edx, ebp
        add eax, 0xD0
        lea esp, ss:[esp]
        public_45db20 : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        jne public_45db20
        mov ecx, dword ptr ds : [ebx+0x384]
        add ecx, 0x80
        call public_59eee0
        mov ecx, dword ptr ds : [ebx+0x384]
        push 0
        push 0
        push ebp
        add ecx, 0x80
        call public_59ec80
        mov eax, dword ptr ds : [ebx+0x384]
        mov eax, dword ptr ds : [eax+0x84]
        cmp eax, 0xFFFFFFFF
        je public_45db97
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x10]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [ebx+0x384]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_45db97 : nop
        mov eax, dword ptr ds : [ebx+0x3A0]
        mov ecx, dword ptr ds : [eax+0x84]
        cmp ecx, 0xFFFFFFFF
        je public_45dbc7
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x10]
        rep movsd
        public_45dbc7 : nop
        mov eax, dword ptr ds : [ebx+0x3A0]
        mov edx, ebp
        add eax, 0xD0
        pop edi
        public_45dbd5 : nop
        mov cl, byte ptr ds : [edx]
        inc edx
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        jne public_45dbd5
        mov ecx, dword ptr ds : [ebx+0x3A0]
        add ecx, 0x80
        call public_59eee0
        mov ecx, dword ptr ds : [ebx+0x3A0]
        push 0
        push 0
        push ebp
        add ecx, 0x80
        call public_59ec80
        mov eax, dword ptr ds : [ebx+0x3A0]
        mov eax, dword ptr ds : [eax+0x84]
        cmp eax, 0xFFFFFFFF
        je public_45dc4c
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0xC]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x9C]
        mov edx, dword ptr ds : [ebx+0x3A0]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_45dc4c : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x45da50)
    }
}

#undef public_45da72
#undef public_45da79
#undef public_45da7e
#undef public_45db0f
#undef public_45db20
#undef public_45db97
#undef public_45dbc7
#undef public_45dbd5
#undef public_45dc4c
