#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb210);
CLANG_FORWARD_JUMP_SYMBOL(public_6394871);

#define public_62bb276 _public_62bb276
#define public_62bb286 _public_62bb286
#define public_62bb299 _public_62bb299
#define public_62bb2d0 _public_62bb2d0
#define public_62bb2e1 _public_62bb2e1
#define public_62bb2f5 _public_62bb2f5
#define public_62bb311 _public_62bb311
#define public_62bb325 _public_62bb325
#define public_62bb341 _public_62bb341
#define public_62bb35e _public_62bb35e
#define public_62bb362 _public_62bb362
#define public_62bb37b _public_62bb37b

PROC_DECLARE(0x62bb210, internal_62bb210, public_62bb210);
extern "C" NAKED register_t __cdecl internal_62bb210()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394871 @0x62bb212*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394871
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], edi
        xor edx, edx
        cmp edi, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_62bb37b
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ecx
        mov al, byte ptr ds : [esi+8]
        add esi, 8
        lea ebp, ds:[edi+8]
        mov byte ptr ss : [ebp], al
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov ecx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+8]
        mov ebx, ecx
        cmp eax, ebx
        jae public_62bb276
        mov ebx, eax
        public_62bb276 : nop
        cmp ebp, esi
        jne public_62bb2e1
        cmp ebx, edx
        mov esi, eax
        jbe public_62bb286
        call dword ptr ds : [public_63991c4]
        public_62bb286 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_62bb299
        mov esi, eax
        public_62bb299 : nop
        test esi, esi
        jbe public_62bb2d0
        mov edx, dword ptr ss : [ebp+4]
        sub eax, esi
        add ebx, edx
        push eax
        lea eax, ds:[ebx+esi]
        push eax
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62bb2d0
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_62bb2d0 : nop
        push 0
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6399198]
        jmp public_62bb362
        public_62bb2e1 : nop
        cmp ebx, edx
        jbe public_62bb325
        cmp ebx, ecx
        jne public_62bb325
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_62bb2f5
        mov eax, dword ptr ds : [public_63991d0]
        public_62bb2f5 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_62bb325
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62bb311
        mov eax, dword ptr ds : [public_63991d0]
        public_62bb311 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_62bb362
        public_62bb325 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62bb35e
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_62bb341
        mov esi, dword ptr ds : [public_63991d0]
        public_62bb341 : nop
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
        public_62bb35e : nop
        mov edi, dword ptr ss : [esp+0x24]
        public_62bb362 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [eax+0x1C]
        pop esi
        mov dword ptr ds : [edi+0x1C], ecx
        mov edx, dword ptr ds : [eax+0x20]
        pop ebp
        mov dword ptr ds : [edi+0x20], edx
        pop ebx
        public_62bb37b : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62bb210)
    }
}

#undef public_62bb276
#undef public_62bb286
#undef public_62bb299
#undef public_62bb2d0
#undef public_62bb2e1
#undef public_62bb2f5
#undef public_62bb311
#undef public_62bb325
#undef public_62bb341
#undef public_62bb35e
#undef public_62bb362
#undef public_62bb37b
