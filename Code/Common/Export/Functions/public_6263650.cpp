#include "Common-PCH.h"


#define public_62636a5 _public_62636a5
#define public_62636c3 _public_62636c3
#define public_62636e1 _public_62636e1
#define public_6263700 _public_6263700
#define public_6263736 _public_6263736
#define public_6263755 _public_6263755
#define public_626376a _public_626376a
#define public_6263786 _public_6263786
#define public_626379a _public_626379a
#define public_62637b5 _public_62637b5
#define public_62637da _public_62637da
#define public_62637de _public_62637de
#define public_6263830 _public_6263830

PROC_DECLARE(0x6263650, internal_6263650, public_6263650);
extern "C" NAKED register_t __cdecl internal_6263650()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_63991c0]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_63991a8]
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [edi+0x24]
        mov eax, edi
        mov ebp, 0xFFFFFFD8
        mov dword ptr ds : [esi+0x24], ecx
        sub eax, esi
        lea ecx, ds:[esi+0x28]
        sub ebp, esi
        public_62636a5 : nop
        mov dl, byte ptr ds : [eax+ecx]
        mov byte ptr ds : [ecx], dl
        inc ecx
        lea edx, ds:[ecx+ebp]
        cmp edx, 0x400
        jb public_62636a5
        mov ebp, 0xFFFFFBD8
        lea ecx, ds:[esi+0x428]
        sub ebp, esi
        public_62636c3 : nop
        mov dl, byte ptr ds : [ecx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        lea edx, ds:[ecx+ebp]
        cmp edx, 0x400
        jb public_62636c3
        mov ebp, 0xFFFFF7D8
        lea ecx, ds:[esi+0x828]
        sub ebp, esi
        public_62636e1 : nop
        mov dl, byte ptr ds : [ecx+eax]
        mov byte ptr ds : [ecx], dl
        inc ecx
        lea edx, ds:[ecx+ebp]
        cmp edx, 0x400
        jb public_62636e1
        lea ecx, ds:[esi+0xC28]
        mov edx, 0x400
        push ebx
        mov edi, edi
        public_6263700 : nop
        mov bx, word ptr ds : [ecx+eax]
        mov word ptr ds : [ecx], bx
        add ecx, 2
        dec edx
        jne public_6263700
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edi+0x1430]
        lea ebp, ds:[edi+0x1428]
        mov eax, edx
        cmp ecx, eax
        lea ebx, ds:[esi+0x1428]
        mov dword ptr ss : [esp+0x10], eax
        jae public_6263736
        mov dword ptr ss : [esp+0x10], ecx
        mov eax, ecx
        public_6263736 : nop
        cmp ebx, ebp
        jne public_6263755
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6399198]
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_6399198]
        jmp public_62637de
        public_6263755 : nop
        test eax, eax
        jbe public_626379a
        cmp eax, edx
        jne public_626379a
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        jne public_626376a
        mov ecx, dword ptr ds : [public_63991d0]
        public_626376a : nop
        cmp byte ptr ds : [ecx-1], 0xFE
        jae public_626379a
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_6263786
        mov eax, dword ptr ds : [public_63991d0]
        public_6263786 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_62637de
        public_626379a : nop
        push 1
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62637da
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_62637b5
        mov eax, dword ptr ds : [public_63991d0]
        public_62637b5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [eax+ecx], 0
        public_62637da : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_62637de : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [ebx+0x10], edx
        mov eax, dword ptr ss : [ebp+0x14]
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ss : [ebp+0x1C]
        mov dword ptr ds : [ebx+0x1C], edx
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+0x20], eax
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [ebx+0x24], ecx
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [ebx+0x28], edx
        mov eax, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x2C], eax
        mov cx, word ptr ss : [ebp+0x30]
        mov word ptr ds : [ebx+0x30], cx
        mov edx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x34], edx
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], eax
        sub ebp, ebx
        mov ecx, 0xFFFFFFC4
        lea eax, ds:[ebx+0x3C]
        sub ecx, ebx
        pop ebx
        nop 
        public_6263830 : nop
        mov dl, byte ptr ds : [eax+ebp]
        mov byte ptr ds : [eax], dl
        inc eax
        lea edx, ds:[ecx+eax]
        cmp edx, 0x100
        jb public_6263830
        mov al, byte ptr ds : [edi+0x1564]
        mov byte ptr ds : [esi+0x1564], al
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6263650)
    }
}

#undef public_62636a5
#undef public_62636c3
#undef public_62636e1
#undef public_6263700
#undef public_6263736
#undef public_6263755
#undef public_626376a
#undef public_6263786
#undef public_626379a
#undef public_62637b5
#undef public_62637da
#undef public_62637de
#undef public_6263830
