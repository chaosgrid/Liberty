#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acb0a0);

#define public_6acb0ed _public_6acb0ed
#define public_6acb0f1 _public_6acb0f1
#define public_6acb110 _public_6acb110
#define public_6acb132 _public_6acb132
#define public_6acb141 _public_6acb141
#define public_6acb151 _public_6acb151
#define public_6acb15d _public_6acb15d
#define public_6acb17e _public_6acb17e
#define public_6acb1a0 _public_6acb1a0
#define public_6acb1bc _public_6acb1bc
#define public_6acb1f1 _public_6acb1f1
#define public_6acb21a _public_6acb21a
#define public_6acb240 _public_6acb240
#define public_6acb27a _public_6acb27a
#define public_6acb289 _public_6acb289

PROC_DECLARE(0x6acb0a0, internal_6acb0a0, public_6acb0a0);
extern "C" NAKED register_t __cdecl internal_6acb0a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        sub esp, 0x10
        cmp ecx, 0
        je public_6acb289
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], esi
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp], ebp
        mov dword ptr ss : [esp+4], ebx
        lea eax, ds:[edi+edi*2]
        mov esi, dword ptr ss : [esp+0x14]
        shl eax, 2
        cmp edx, edi
        mov ebp, dword ptr ss : [esp+0x24]
        jne public_6acb132
        cmp edx, 4
        je public_6acb21a
        cmp edx, 3
        je public_6acb1a0
        jne public_6acb132
        public_6acb0ed : nop
        shr ebp, 1
        mov eax, dword ptr ds : [esi]
        public_6acb0f1 : nop
        mov ebx, dword ptr ds : [esi+edx*4]
        mov ecx, dword ptr ds : [esi+edx*4+4]
        sbb ebx, eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+edi*8], ebx
        lea esi, ds:[esi+8]
        sbb ecx, eax
        dec ebp
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi+edi*8-4], ecx
        jne public_6acb0f1
        mov ebp, edx
        public_6acb110 : nop
        mov eax, dword ptr ds : [esi+edx*4-4]
        mov ebx, dword ptr ds : [esi+edx*4-8]
        sub ebp, 2
        mov dword ptr ds : [esi+edi*4-4], eax
        mov dword ptr ds : [esi+edi*4-8], ebx
        lea esi, ds:[esi-8]
        jne public_6acb110
        pop ecx
        pop ebp
        dec ecx
        pop eax
        je public_6acb27a
        public_6acb132 : nop
        lea ebx, ds:[esi+edx*4-4]
        sub esi, eax
        sub ebx, eax
        push eax
        push ebp
        push ecx
        lea ecx, ss:[ebp+ecx-1]
        public_6acb141 : nop
        mov eax, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [ebx+edx*4]
        cmp eax, ebp
        jne public_6acb151
        cmp esi, ebx
        lea ebx, ds:[ebx-4]
        jne public_6acb141
        public_6acb151 : nop
        sbb al, al
        mov ebp, edx
        mov byte ptr ds : [ecx], al
        jne public_6acb0ed
        shr ebp, 1
        mov eax, dword ptr ds : [esi]
        public_6acb15d : nop
        mov ebx, dword ptr ds : [esi+edx*4]
        mov ecx, dword ptr ds : [esi+edx*4+4]
        sbb eax, ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+edi*8], eax
        lea esi, ds:[esi+8]
        sbb ebx, ecx
        dec ebp
        mov dword ptr ds : [esi+edi*8-4], ebx
        mov eax, dword ptr ds : [esi]
        jne public_6acb15d
        mov ebp, edx
        je public_6acb110
        public_6acb17e : nop
        sub ebx, eax
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x18], ebx
        sbb eax, edx
        mov edx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x1C], eax
        sbb ebx, edx
        dec ecx
        mov dword ptr ds : [esi+0x20], ebx
        je public_6acb27a
        public_6acb1a0 : nop
        mov eax, dword ptr ds : [esi-0x1C]
        mov ebx, dword ptr ds : [esi-0x10]
        cmp eax, ebx
        jne public_6acb1bc
        mov eax, dword ptr ds : [esi-0x20]
        mov ebx, dword ptr ds : [esi-0x14]
        cmp eax, ebx
        jne public_6acb1bc
        mov eax, dword ptr ds : [esi-0x24]
        mov ebx, dword ptr ds : [esi-0x18]
        cmp eax, ebx
        public_6acb1bc : nop
        sbb dl, dl
        mov eax, dword ptr ds : [esi-0x24]
        mov ebx, dword ptr ds : [esi-0x18]
        lea esi, ds:[esi-0x24]
        mov byte ptr ss : [ebp+ecx-1], dl
        jl public_6acb17e
        sub eax, ebx
        mov edx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x18], eax
        sbb edx, ebx
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x1C], edx
        sbb eax, ebx
        dec ecx
        mov dword ptr ds : [esi+0x20], eax
        jne public_6acb1a0
        je public_6acb27a
        public_6acb1f1 : nop
        sub ebx, eax
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x20], ebx
        sbb eax, edx
        mov edx, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+0x24], eax
        sbb ebx, edx
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x28], ebx
        sbb edx, eax
        dec ecx
        mov dword ptr ds : [esi+0x2C], edx
        je public_6acb27a
        public_6acb21a : nop
        mov eax, dword ptr ds : [esi-0x24]
        mov ebx, dword ptr ds : [esi-0x14]
        cmp eax, ebx
        jne public_6acb240
        mov eax, dword ptr ds : [esi-0x28]
        mov ebx, dword ptr ds : [esi-0x18]
        cmp eax, ebx
        jne public_6acb240
        mov eax, dword ptr ds : [esi-0x2C]
        mov ebx, dword ptr ds : [esi-0x1C]
        cmp eax, ebx
        jne public_6acb240
        mov eax, dword ptr ds : [esi-0x30]
        mov ebx, dword ptr ds : [esi-0x20]
        cmp eax, ebx
        public_6acb240 : nop
        sbb dl, dl
        mov eax, dword ptr ds : [esi-0x30]
        mov ebx, dword ptr ds : [esi-0x20]
        lea esi, ds:[esi-0x30]
        mov byte ptr ss : [ebp+ecx-1], dl
        jl public_6acb1f1
        sub eax, ebx
        mov edx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x20], eax
        sbb edx, ebx
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [esi+0x24], edx
        sbb eax, ebx
        mov edx, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi+0x28], eax
        sbb edx, ebx
        dec ecx
        mov dword ptr ds : [esi+0x2C], edx
        jne public_6acb21a
        public_6acb27a : nop
        mov ebp, dword ptr ss : [esp]
        mov ebx, dword ptr ss : [esp+4]
        mov edi, dword ptr ss : [esp+8]
        mov esi, dword ptr ss : [esp+0xC]
        public_6acb289 : nop
        add esp, 0x10
        ret 0x14
        UNREACHABLE_TRAP(0x6acb0a0)
    }
}

#undef public_6acb0ed
#undef public_6acb0f1
#undef public_6acb110
#undef public_6acb132
#undef public_6acb141
#undef public_6acb151
#undef public_6acb15d
#undef public_6acb17e
#undef public_6acb1a0
#undef public_6acb1bc
#undef public_6acb1f1
#undef public_6acb21a
#undef public_6acb240
#undef public_6acb27a
#undef public_6acb289
