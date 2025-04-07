#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a40);
CLANG_FORWARD_PROC_SYMBOL(public_6272a70);
CLANG_FORWARD_PROC_SYMBOL(public_6272aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6272b50);
CLANG_FORWARD_PROC_SYMBOL(public_6272bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6272d90);
CLANG_FORWARD_PROC_SYMBOL(public_62f1c70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626cc83 _public_626cc83
#define public_626cc85 _public_626cc85
#define public_626cc9b _public_626cc9b
#define public_626ccb9 _public_626ccb9
#define public_626ccd9 _public_626ccd9
#define public_626cde6 _public_626cde6
#define public_626ce00 _public_626ce00
#define public_626ce0b _public_626ce0b
#define public_626ce21 _public_626ce21
#define public_626ce34 _public_626ce34
#define public_626ce4a _public_626ce4a
#define public_626ce51 _public_626ce51
#define public_626ce61 _public_626ce61
#define public_626ce6c _public_626ce6c
#define public_626ce82 _public_626ce82
#define public_626ce97 _public_626ce97
#define public_626cea1 _public_626cea1
#define public_626cebb _public_626cebb
#define public_626cec3 _public_626cec3
#define public_626ced9 _public_626ced9
#define public_626ceeb _public_626ceeb
#define public_626cf01 _public_626cf01
#define public_626cf10 _public_626cf10
#define public_626cf2c _public_626cf2c
#define public_626cf40 _public_626cf40
#define public_626cf64 _public_626cf64
#define public_626cf7d _public_626cf7d
#define public_626cfa2 _public_626cfa2
#define public_626cfca _public_626cfca

PROC_DECLARE(0x626cc60, internal_626cc60, public_626cc60);
extern "C" NAKED register_t __cdecl internal_626cc60()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov ebx, ecx
        push ebp
        mov dword ptr ss : [esp+0x18], ebx
        call public_62f1c70
        test ebp, ebp
        je public_626cc83
        lea eax, ss:[ebp+0x94]
        jmp public_626cc85
        public_626cc83 : nop
        xor eax, eax
        public_626cc85 : nop
        lea esi, ds:[eax+8]
        test esi, esi
        jne public_626cc9b
        mov dword ptr ds : [ebx+0x98], esi
        mov byte ptr ds : [ebx+0x9C], 0
        jmp public_626ccd9
        public_626cc9b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        lea edx, ds:[ebx+0x9C]
        jb public_626ccb9
        mov eax, 0x3F
        public_626ccb9 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0x9C], 0
        mov dword ptr ds : [ebx+0x98], eax
        public_626ccd9 : nop
        mov eax, dword ptr ss : [ebp+0xDC]
        mov dword ptr ds : [ebx+0xDC], eax
        mov ecx, dword ptr ss : [ebp+0xE0]
        mov dword ptr ds : [ebx+0xE0], ecx
        mov edx, dword ptr ss : [ebp+0xE4]
        mov dword ptr ds : [ebx+0xE4], edx
        mov eax, dword ptr ss : [ebp+0xE8]
        mov dword ptr ds : [ebx+0xE8], eax
        mov ecx, dword ptr ss : [ebp+0xEC]
        mov dword ptr ds : [ebx+0xEC], ecx
        mov edx, dword ptr ss : [ebp+0xF0]
        mov dword ptr ds : [ebx+0xF0], edx
        mov eax, dword ptr ss : [ebp+0xF4]
        mov dword ptr ds : [ebx+0xF4], eax
        mov ecx, dword ptr ss : [ebp+0xF8]
        mov dword ptr ds : [ebx+0xF8], ecx
        mov edx, dword ptr ss : [ebp+0xFC]
        mov dword ptr ds : [ebx+0xFC], edx
        mov eax, dword ptr ss : [ebp+0x100]
        mov dword ptr ds : [ebx+0x100], eax
        mov ecx, dword ptr ss : [ebp+0x104]
        mov dword ptr ds : [ebx+0x104], ecx
        lea edx, ss:[ebp+0x108]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x108]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ss:[ebp+0x114]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x114]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x120]
        mov dword ptr ds : [ebx+0x120], ecx
        mov edx, dword ptr ss : [ebp+0x124]
        mov dword ptr ds : [ebx+0x124], edx
        mov eax, dword ptr ss : [ebp+0x128]
        mov dword ptr ds : [ebx+0x128], eax
        mov ecx, dword ptr ss : [ebp+0x12C]
        add ebp, 0x130
        lea esi, ds:[ebx+0x130]
        cmp esi, ebp
        mov dword ptr ds : [ebx+0x12C], ecx
        je public_626cfca
        mov edi, dword ptr ss : [ebp+4]
        test edi, edi
        jne public_626cde6
        mov dword ptr ss : [esp+0x10], edi
        jmp public_626ce00
        public_626cde6 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_626ce00 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_626ce0b
        xor edx, edx
        jmp public_626ce21
        public_626ce0b : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_626ce21 : nop
        cmp dword ptr ss : [esp+0x10], edx
        ja public_626ce97
        mov eax, dword ptr ss : [ebp+8]
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, ecx
        je public_626ce4a
        public_626ce34 : nop
        push edi
        mov ecx, ebx
        call public_6272bf0
        mov eax, dword ptr ss : [esp+0x10]
        add edi, 0x14
        add ebx, 0x14
        cmp edi, eax
        jne public_626ce34
        public_626ce4a : nop
        mov edi, dword ptr ds : [esi+8]
        cmp ebx, edi
        je public_626ce61
        public_626ce51 : nop
        push 0
        mov ecx, ebx
        call public_6272d90
        add ebx, 0x14
        cmp ebx, edi
        jne public_626ce51
        public_626ce61 : nop
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_626ce6c
        xor edx, edx
        jmp public_626ce82
        public_626ce6c : nop
        mov ebp, dword ptr ss : [ebp+8]
        sub ebp, eax
        mov eax, 0x66666667
        imul ebp
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_626ce82 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x14]
        lea edx, ds:[edx+edx*4]
        lea ecx, ds:[eax+edx*4]
        mov dword ptr ds : [esi+8], ecx
        jmp public_626cfca
        public_626ce97 : nop
        test edi, edi
        jne public_626cea1
        mov dword ptr ss : [esp+0x10], edi
        jmp public_626cebb
        public_626cea1 : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, edi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_626cebb : nop
        test ecx, ecx
        jne public_626cec3
        xor edx, edx
        jmp public_626ced9
        public_626cec3 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_626ced9 : nop
        cmp dword ptr ss : [esp+0x10], edx
        ja public_626cf7d
        test ecx, ecx
        jne public_626ceeb
        xor edx, edx
        jmp public_626cf01
        public_626ceeb : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_626cf01 : nop
        lea edx, ds:[edx+edx*4]
        lea ebx, ds:[edi+edx*4]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], ecx
        je public_626cf2c
        nop 
        public_626cf10 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_6272bf0
        mov edx, dword ptr ss : [esp+0x10]
        add edx, 0x14
        add edi, 0x14
        cmp edi, ebx
        mov dword ptr ss : [esp+0x10], edx
        jne public_626cf10
        public_626cf2c : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp ebx, eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ebx
        je public_626cf64
        public_626cf40 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        call public_6272b50
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x20]
        add edx, 0x14
        add edi, 0x14
        add esp, 8
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_626cf40
        public_626cf64 : nop
        mov ecx, ebp
        call public_6272a40
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*4]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ds : [esi+8], edx
        jmp public_626cfca
        public_626cf7d : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push ecx
        mov ecx, esi
        call public_6272a70
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        add esp, 4
        mov ecx, ebp
        call public_6272a40
        test eax, eax
        jge public_626cfa2
        xor eax, eax
        public_626cfa2 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 2
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_6272aa0
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_626cfca : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x140]
        pop edi
        mov dword ptr ds : [ebx+0x140], ecx
        mov edx, dword ptr ds : [eax+0x144]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x144], edx
        mov eax, ebx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x626cc60)
    }
}

#undef public_626cc83
#undef public_626cc85
#undef public_626cc9b
#undef public_626ccb9
#undef public_626ccd9
#undef public_626cde6
#undef public_626ce00
#undef public_626ce0b
#undef public_626ce21
#undef public_626ce34
#undef public_626ce4a
#undef public_626ce51
#undef public_626ce61
#undef public_626ce6c
#undef public_626ce82
#undef public_626ce97
#undef public_626cea1
#undef public_626cebb
#undef public_626cec3
#undef public_626ced9
#undef public_626ceeb
#undef public_626cf01
#undef public_626cf10
#undef public_626cf2c
#undef public_626cf40
#undef public_626cf64
#undef public_626cf7d
#undef public_626cfa2
#undef public_626cfca
