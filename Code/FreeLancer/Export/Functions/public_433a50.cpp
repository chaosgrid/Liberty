#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433a50);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9021);

#define public_433aa5 _public_433aa5
#define public_433ab5 _public_433ab5
#define public_433ac8 _public_433ac8
#define public_433afe _public_433afe
#define public_433b19 _public_433b19
#define public_433b2d _public_433b2d
#define public_433b49 _public_433b49
#define public_433b73 _public_433b73
#define public_433b8f _public_433b8f
#define public_433bac _public_433bac

PROC_DECLARE(0x433a50, internal_433a50, public_433a50);
extern "C" NAKED register_t __cdecl internal_433a50()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9021 @0x433a52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9021
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_433bac
        mov esi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov ecx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        jae public_433aa5
        mov ebx, eax
        public_433aa5 : nop
        cmp ebp, esi
        jne public_433b19
        cmp ebx, edi
        mov esi, eax
        jbe public_433ab5
        call dword ptr ds : [public_5c7064]
        public_433ab5 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_433ac8
        mov esi, eax
        public_433ac8 : nop
        cmp esi, edi
        jbe public_433afe
        mov edx, dword ptr ss : [ebp+4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push edi
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_433afe
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c706c]
        public_433afe : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c7068]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_433b19 : nop
        cmp ebx, edi
        jbe public_433b73
        cmp ebx, ecx
        jne public_433b73
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_433b2d
        mov eax, dword ptr ds : [public_5c7078]
        public_433b2d : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_433b73
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        jne public_433b49
        mov eax, dword ptr ds : [public_5c7078]
        public_433b49 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        pop edi
        mov dword ptr ss : [ebp+0xC], edx
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
        public_433b73 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_433bac
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_433b8f
        mov esi, dword ptr ds : [public_5c7078]
        public_433b8f : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_433bac : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x433a50)
    }
}

#undef public_433aa5
#undef public_433ab5
#undef public_433ac8
#undef public_433afe
#undef public_433b19
#undef public_433b2d
#undef public_433b49
#undef public_433b73
#undef public_433b8f
#undef public_433bac
