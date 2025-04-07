#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d39440);

#define public_6d39303 _public_6d39303
#define public_6d39334 _public_6d39334
#define public_6d39353 _public_6d39353
#define public_6d39397 _public_6d39397
#define public_6d393c0 _public_6d393c0
#define public_6d393c5 _public_6d393c5
#define public_6d393c9 _public_6d393c9
#define public_6d39400 _public_6d39400
#define public_6d39402 _public_6d39402
#define public_6d39413 _public_6d39413
#define public_6d39425 _public_6d39425

PROC_DECLARE(0x6d392a0, internal_6d392a0, public_6d392a0);
extern "C" NAKED register_t __cdecl internal_6d392a0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x10]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x24], 0
        je public_6d393c9
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        je public_6d393c9
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp edi, eax
        mov ebx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d39334
        add ecx, 0xD
        mov dword ptr ss : [esp+0x18], ecx
        public_6d39303 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push esi
        call public_6d39440
        test al, al
        jne public_6d393c5
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [edi]
        jne public_6d393c5
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 2
        add ebx, 2
        cmp edi, eax
        jne public_6d39303
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d39334 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, ebx
        sub ecx, edx
        test ecx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ebx
        jne public_6d39353
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x24], edx
        jmp public_6d393c9
        public_6d39353 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jae public_6d393c9
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x18], eax
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax+4]
        shl edx, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        je public_6d393c9
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp edi, eax
        mov ebx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x18], eax
        je public_6d393c0
        add ecx, 0xD
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d39397 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        push esi
        call public_6d39440
        test al, al
        jne public_6d393c5
        mov cx, word ptr ds : [ebx]
        cmp cx, word ptr ds : [edi]
        jne public_6d393c5
        mov eax, dword ptr ss : [esp+0x18]
        add edi, 2
        add ebx, 2
        cmp edi, eax
        jne public_6d39397
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d393c0 : nop
        mov dword ptr ds : [esi+0x10], ebx
        jmp public_6d39353
        public_6d393c5 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d393c9 : nop
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, dword ptr ss : [ebp+0xC]
        jb public_6d39425
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d39400
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d39402
        public_6d39400 : nop
        mov eax, edx
        public_6d39402 : nop
        test eax, eax
        je public_6d39413
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d39413 : nop
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_6d39425 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], ecx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d392a0)
    }
}

#undef public_6d39303
#undef public_6d39334
#undef public_6d39353
#undef public_6d39397
#undef public_6d393c0
#undef public_6d393c5
#undef public_6d393c9
#undef public_6d39400
#undef public_6d39402
#undef public_6d39413
#undef public_6d39425
