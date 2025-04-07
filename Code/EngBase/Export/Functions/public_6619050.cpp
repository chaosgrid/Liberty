#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6619050);
CLANG_FORWARD_PROC_SYMBOL(public_661a500);
CLANG_FORWARD_PROC_SYMBOL(public_661a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_661aa60);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6619105 _public_6619105
#define public_6619122 _public_6619122
#define public_6619148 _public_6619148
#define public_6619153 _public_6619153
#define public_6619165 _public_6619165
#define public_6619171 _public_6619171
#define public_661917d _public_661917d

PROC_DECLARE(0x6619050, internal_6619050, public_6619050);
extern "C" NAKED register_t __cdecl internal_6619050()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
        push 0x30
        mov al, byte ptr ds : [edi]
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        mov byte ptr ds : [esi+0xC], dl
        call public_66281dc
        xor ebp, ebp
        mov cl, 1
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x2C], cl
        mov byte ptr ds : [eax+0x2D], 0
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x2D], cl
        mov eax, dword ptr ds : [esi+8]
        push 0x30
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        call public_66281dc
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x2C], 0
        mov byte ptr ds : [eax+0x2D], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], ebp
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ebp, dword ptr ds : [edx+4]
        mov cl, byte ptr ss : [ebp+0x2D]
        test cl, cl
        jne public_6619122
        mov dl, byte ptr ss : [ebp+0x2C]
        mov ecx, esi
        push edx
        push eax
        call public_661a5a0
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_661aa60
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6619105
        mov dword ptr ss : [esp+0x14], ebx
        public_6619105 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_661a500
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_661a500
        mov dword ptr ds : [ebx+8], eax
        public_6619122 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_661917d
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        jne public_6619153
        public_6619148 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_6619148
        public_6619153 : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_6619171
        public_6619165 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_6619165
        public_6619171 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_661917d : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6619050)
    }
}

#undef public_6619105
#undef public_6619122
#undef public_6619148
#undef public_6619153
#undef public_6619165
#undef public_6619171
#undef public_661917d
