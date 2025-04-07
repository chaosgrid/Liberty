#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57d1f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3f12);

#define public_57d256 _public_57d256
#define public_57d263 _public_57d263
#define public_57d27c _public_57d27c
#define public_57d2bd _public_57d2bd
#define public_57d2e5 _public_57d2e5
#define public_57d302 _public_57d302
#define public_57d312 _public_57d312

PROC_DECLARE(0x57d1f0, internal_57d1f0, public_57d1f0);
extern "C" NAKED register_t __cdecl internal_57d1f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push public_5c3f12 @0x57d1f5*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3f12
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        push edi
        mov ebx, ecx
        jle public_57d312
        lea eax, ds:[esi+esi+2]
        add eax, 3
        and eax, 0xFFFFFFFC
        call public_5b7e90
        mov cl, byte ptr ds : [ebx+0x508]
        test cl, cl
        mov edx, esp
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, edx
        je public_57d256
        test esi, esi
        jle public_57d27c
        mov ecx, esi
        shr ecx, 1
        mov eax, 0x2A002A
        mov edi, edx
        rep stosd
        adc ecx, ecx
        rep stosw
        lea eax, ds:[edx+esi*2]
        jmp public_57d27c
        public_57d256 : nop
        test esi, esi
        jle public_57d27c
        mov ecx, dword ptr ss : [ebp+8]
        lea ecx, ds:[ecx+ecx*2]
        shl ecx, 2
        public_57d263 : nop
        mov edx, dword ptr ds : [ebx+0x4C8]
        mov dx, word ptr ds : [ecx+edx]
        mov word ptr ds : [eax], dx
        add eax, 2
        add ecx, 0xC
        dec esi
        jne public_57d263
        mov edx, dword ptr ss : [ebp+0xC]
        public_57d27c : nop
        push 0xFFFFFFFF
        push edx
        lea ecx, ss:[ebp-0x24]
        mov word ptr ds : [eax], 0
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [ebp-4], 0
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [ebp+0xC], eax
        mov esi, dword ptr ds : [ebx+0x4EC]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov byte ptr ss : [ebp-4], 1
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_57d2bd
        mov edi, eax
        public_57d2bd : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp-0x10], esi
        test esi, esi
        mov edi, dword ptr ss : [ebp+0xC]
        mov byte ptr ss : [ebp-4], 2
        je public_57d2e5
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [esi], eax
        public_57d2e5 : nop
        mov ecx, dword ptr ds : [ebx+0x4F0]
        inc ecx
        test edi, edi
        mov dword ptr ds : [ebx+0x4F0], ecx
        mov byte ptr ss : [ebp-4], 0
        je public_57d302
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_57d302 : nop
        lea ecx, ss:[ebp-0x24]
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        public_57d312 : nop
        lea esp, ss:[ebp-0x30]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x57d1f0)
    }
}

#undef public_57d256
#undef public_57d263
#undef public_57d27c
#undef public_57d2bd
#undef public_57d2e5
#undef public_57d302
#undef public_57d312
