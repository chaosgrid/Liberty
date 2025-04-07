#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3350);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab191);

#define public_6ed33c1 _public_6ed33c1
#define public_6ed33d1 _public_6ed33d1
#define public_6ed33e4 _public_6ed33e4
#define public_6ed341b _public_6ed341b
#define public_6ed3436 _public_6ed3436
#define public_6ed344a _public_6ed344a
#define public_6ed3466 _public_6ed3466
#define public_6ed3490 _public_6ed3490
#define public_6ed34ac _public_6ed34ac
#define public_6ed34c8 _public_6ed34c8

PROC_DECLARE(0x6ed3350, internal_6ed3350, public_6ed3350);
extern "C" NAKED register_t __cdecl internal_6ed3350()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab191 @0x6ed3352*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab191
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], eax
        xor edx, edx
        cmp eax, edx
        mov dword ptr ss : [esp+0x1C], edx
        je public_6ed34c8
        mov ebx, dword ptr ss : [esp+0x28]
        mov edi, eax
        mov esi, ebx
        mov ecx, 9
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x24]
        mov dword ptr ds : [eax+0x24], ecx
        mov ecx, dword ptr ds : [ebx+0x28]
        mov dword ptr ds : [eax+0x28], ecx
        lea esi, ds:[ebx+0x2C]
        lea ebx, ds:[eax+0x2C]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [ebx], al
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], edx
        mov ecx, dword ptr ds : [public_6fb3304]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebp, ecx
        cmp eax, ebp
        jae public_6ed33c1
        mov ebp, eax
        public_6ed33c1 : nop
        cmp ebx, esi
        jne public_6ed3436
        cmp ebp, edx
        mov esi, eax
        jbe public_6ed33d1
        call dword ptr ds : [public_6fb32e4]
        public_6ed33d1 : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb32e8]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_6ed33e4
        mov esi, eax
        public_6ed33e4 : nop
        test esi, esi
        jbe public_6ed341b
        mov edx, dword ptr ds : [ebx+4]
        sub eax, esi
        add ebp, edx
        push eax
        lea eax, ds:[esi+ebp]
        push eax
        push ebp
        call dword ptr ds : [public_6fb3388]
        mov edi, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6ed341b
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6fb32ec]
        public_6ed341b : nop
        mov ecx, ebx
        call dword ptr ds : [public_6fb32e8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6ed3436 : nop
        cmp ebp, edx
        jbe public_6ed3490
        cmp ebp, ecx
        jne public_6ed3490
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_6ed344a
        mov eax, dword ptr ds : [public_6fb32f4]
        public_6ed344a : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6ed3490
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_6fb32f8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6ed3466
        mov eax, dword ptr ds : [public_6fb32f4]
        public_6ed3466 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ds : [ebx+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_6ed3490 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb3300]
        test al, al
        je public_6ed34c8
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_6ed34ac
        mov esi, dword ptr ds : [public_6fb32f4]
        public_6ed34ac : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_6fb32ec]
        public_6ed34c8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ed3350)
    }
}

#undef public_6ed33c1
#undef public_6ed33d1
#undef public_6ed33e4
#undef public_6ed341b
#undef public_6ed3436
#undef public_6ed344a
#undef public_6ed3466
#undef public_6ed3490
#undef public_6ed34ac
#undef public_6ed34c8
