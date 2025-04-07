#include "Common-PCH.h"


#define public_6328172 _public_6328172
#define public_63281b8 _public_63281b8
#define public_63281d0 _public_63281d0
#define public_632820b _public_632820b
#define public_632820f _public_632820f
#define public_6328225 _public_6328225

PROC_DECLARE(0x6328120, internal_6328120, public_6328120);
extern "C" NAKED register_t __cdecl internal_6328120()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        test esi, esi
        push edi
        mov edi, ecx
        je public_6328225
        mov ebp, dword ptr ss : [esp+0x34]
        test ebp, ebp
        je public_6328225
        movzx eax, byte ptr ds : [edi+0x1C]
        imul eax, 0x7C
        mov eax, dword ptr ds : [eax+public_64019a8]
        push ebx
        mov ebx, dword ptr ds : [edi+0x3C]
        push eax
        push ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_6399088]
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x18], eax
        jne public_6328172
        push esi
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov ebp, eax
        public_6328172 : nop
        mov al, byte ptr ds : [public_640a709]
        test al, al
        je public_63281b8
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [edi+0x3C]
        push 0
        push edx
        push eax
        push ebp
        push esi
        push ecx
        call dword ptr ds : [public_6399078]
        test eax, eax
        jne public_632820f
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push ebx
        call dword ptr ds : [public_6399088]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 0x18
        public_63281b8 : nop
        test ebp, ebp
        mov ebx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ebx], 0
        mov dword ptr ss : [esp+0x10], 0
        je public_632820b
        mov edi, edi
        public_63281d0 : nop
        movzx eax, word ptr ds : [esi]
        mov edx, dword ptr ds : [edi+0x3C]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        push eax
        push edx
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [public_639909c]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x10]
        add eax, ecx
        cmp eax, dword ptr ss : [esp+0x28]
        jge public_632820b
        mov edx, dword ptr ds : [ebx]
        inc edx
        add esi, 2
        dec ebp
        mov dword ptr ds : [ebx], edx
        mov dword ptr ss : [esp+0x10], eax
        jne public_63281d0
        public_632820b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_632820f : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push ebx
        call dword ptr ds : [public_6399088]
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 0x10
        ret 0x18
        public_6328225 : nop
        mov eax, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        mov dword ptr ds : [eax], 0
        pop ebp
        add esp, 0x10
        ret 0x18
        UNREACHABLE_TRAP(0x6328120)
    }
}

#undef public_6328172
#undef public_63281b8
#undef public_63281d0
#undef public_632820b
#undef public_632820f
#undef public_6328225
