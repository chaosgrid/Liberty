#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10002250);
CLANG_FORWARD_PROC_SYMBOL(public_10002350);

#define public_10002356 _public_10002356
#define public_10002374 _public_10002374
#define public_10002380 _public_10002380
#define public_100023c5 _public_100023c5
#define public_100023d4 _public_100023d4
#define public_100023d6 _public_100023d6
#define public_100023e4 _public_100023e4
#define public_100023f3 _public_100023f3
#define public_100023f5 _public_100023f5
#define public_100023fd _public_100023fd
#define public_1000244e _public_1000244e
#define public_10002463 _public_10002463

PROC_DECLARE(0x10002350, internal_10002350, public_10002350);
extern "C" NAKED register_t __cdecl internal_10002350()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ds : [ebx+0x24]
        push esi
        push edi
        public_10002356 : nop
        mov eax, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [ebx+0x34]
        mov ecx, dword ptr ds : [ebx+0x6C]
        sub edx, eax
        sub edx, ecx
        jne public_10002374
        test eax, eax
        jne public_10002380
        test ecx, ecx
        jne public_10002380
        mov edx, ebp
        jmp public_100023fd
        public_10002374 : nop
        cmp edx, 0xFFFFFFFF
        jne public_10002380
        mov edx, 0xFFFFFFFE
        jmp public_100023fd
        public_10002380 : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        lea ecx, ds:[ecx+ebp-0x106]
        cmp eax, ecx
        jb public_100023fd
        mov edi, dword ptr ds : [ebx+0x30]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        lea esi, ds:[edi+ebp]
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [ebx+0x68]
        mov ecx, dword ptr ds : [ebx+0x64]
        mov eax, dword ptr ds : [ebx+0x54]
        sub ecx, ebp
        sub esi, ebp
        mov dword ptr ds : [ebx+0x64], ecx
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov dword ptr ds : [ebx+0x68], esi
        mov esi, dword ptr ds : [ebx+0x44]
        sub eax, ebp
        mov dword ptr ds : [ebx+0x54], eax
        lea ecx, ds:[ecx+esi*2]
        public_100023c5 : nop
        movzx eax, word ptr ds : [ecx-2]
        sub ecx, 2
        cmp eax, ebp
        jb public_100023d4
        sub eax, ebp
        jmp public_100023d6
        public_100023d4 : nop
        xor eax, eax
        public_100023d6 : nop
        dec esi
        mov word ptr ds : [ecx], ax
        jne public_100023c5
        mov eax, dword ptr ds : [ebx+0x38]
        mov esi, ebp
        lea ecx, ds:[eax+ebp*2]
        public_100023e4 : nop
        movzx eax, word ptr ds : [ecx-2]
        sub ecx, 2
        cmp eax, ebp
        jb public_100023f3
        sub eax, ebp
        jmp public_100023f5
        public_100023f3 : nop
        xor eax, eax
        public_100023f5 : nop
        dec esi
        mov word ptr ds : [ecx], ax
        jne public_100023e4
        add edx, ebp
        public_100023fd : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_10002463
        mov ecx, dword ptr ds : [ebx+0x6C]
        mov edi, dword ptr ds : [ebx+0x64]
        mov esi, dword ptr ds : [ebx+0x30]
        add ecx, edi
        add ecx, esi
        push ecx
        push eax
        mov ecx, edx
        call public_10002250
        mov ecx, dword ptr ds : [ebx+0x6C]
        add ecx, eax
        mov edx, ecx
        add esp, 8
        cmp edx, 3
        mov dword ptr ds : [ebx+0x6C], ecx
        jb public_1000244e
        mov eax, dword ptr ds : [ebx+0x64]
        mov ecx, dword ptr ds : [ebx+0x30]
        lea esi, ds:[eax+ecx]
        movzx eax, byte ptr ds : [esi]
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ds : [ebx+0x40], eax
        shl eax, cl
        movzx ecx, byte ptr ds : [esi+1]
        xor eax, ecx
        and eax, dword ptr ds : [ebx+0x4C]
        mov dword ptr ds : [ebx+0x40], eax
        public_1000244e : nop
        cmp edx, 0x106
        jae public_10002463
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+4]
        test eax, eax
        jne public_10002356
        public_10002463 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x10002350)
    }
}

#undef public_10002356
#undef public_10002374
#undef public_10002380
#undef public_100023c5
#undef public_100023d4
#undef public_100023d6
#undef public_100023e4
#undef public_100023f3
#undef public_100023f5
#undef public_100023fd
#undef public_1000244e
#undef public_10002463
