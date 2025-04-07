#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003040);

#define public_10003082 _public_10003082
#define public_1000308a _public_1000308a
#define public_100030af _public_100030af
#define public_100030be _public_100030be
#define public_100030c2 _public_100030c2
#define public_100030e0 _public_100030e0
#define public_10003120 _public_10003120
#define public_10003127 _public_10003127
#define public_10003150 _public_10003150
#define public_1000316c _public_1000316c
#define public_10003176 _public_10003176

PROC_DECLARE(0x10003040, internal_10003040, public_10003040);
extern "C" NAKED register_t __cdecl internal_10003040()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ds : [esi+0x30]
        mov ebp, dword ptr ds : [esi+0x70]
        push edi
        mov edi, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x88]
        lea ebx, ds:[edi-0x106]
        add ecx, edx
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], eax
        jbe public_10003082
        sub edx, edi
        add edx, 0x106
        mov dword ptr ss : [esp+0x18], edx
        jmp public_1000308a
        public_10003082 : nop
        mov dword ptr ss : [esp+0x18], 0
        public_1000308a : nop
        mov dx, word ptr ds : [ecx]
        mov word ptr ss : [esp+0x1C], dx
        mov dx, word ptr ds : [ecx+ebp-1]
        mov word ptr ss : [esp+0x14], dx
        cmp ebp, dword ptr ds : [esi+0x84]
        lea ebx, ds:[ecx+0x101]
        jb public_100030af
        shr dword ptr ss : [esp+0x28], 2
        public_100030af : nop
        mov edx, dword ptr ds : [esi+0x6C]
        cmp eax, edx
        mov dword ptr ss : [esp+0x20], edx
        jbe public_100030be
        mov dword ptr ss : [esp+0x10], edx
        public_100030be : nop
        mov edi, dword ptr ss : [esp+0x2C]
        public_100030c2 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov ax, word ptr ss : [esp+0x14]
        add edx, edi
        cmp word ptr ds : [edx+ebp-1], ax
        jne public_10003150
        mov ax, word ptr ss : [esp+0x1C]
        cmp word ptr ds : [edx], ax
        jne public_10003150
        inc ecx
        inc edx
        nop 
        public_100030e0 : nop
        mov ax, word ptr ds : [ecx+2]
        add ecx, 2
        add edx, 2
        cmp ax, word ptr ds : [edx]
        jne public_10003120
        mov ax, word ptr ds : [ecx+2]
        add ecx, 2
        add edx, 2
        cmp ax, word ptr ds : [edx]
        jne public_10003120
        mov ax, word ptr ds : [ecx+2]
        add ecx, 2
        add edx, 2
        cmp ax, word ptr ds : [edx]
        jne public_10003120
        mov ax, word ptr ds : [ecx+2]
        add ecx, 2
        add edx, 2
        cmp ax, word ptr ds : [edx]
        jne public_10003120
        cmp ecx, ebx
        jb public_100030e0
        public_10003120 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, byte ptr ds : [edx]
        jne public_10003127
        inc ecx
        public_10003127 : nop
        mov edx, ecx
        sub edx, ebx
        add edx, 0x101
        cmp edx, ebp
        lea ecx, ds:[ebx-0x101]
        jle public_10003150
        cmp edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x68], edi
        mov ebp, edx
        jge public_1000316c
        mov dx, word ptr ds : [edx+ecx-1]
        mov word ptr ss : [esp+0x14], dx
        public_10003150 : nop
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x38]
        and edx, edi
        movzx edi, word ptr ds : [eax+edx*2]
        cmp edi, dword ptr ss : [esp+0x18]
        jbe public_1000316c
        dec dword ptr ss : [esp+0x28]
        jne public_100030c2
        public_1000316c : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp ebp, eax
        ja public_10003176
        mov eax, ebp
        public_10003176 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x10003040)
    }
}

#undef public_10003082
#undef public_1000308a
#undef public_100030af
#undef public_100030be
#undef public_100030c2
#undef public_100030e0
#undef public_10003120
#undef public_10003127
#undef public_10003150
#undef public_1000316c
#undef public_10003176
