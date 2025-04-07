#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42f30);
CLANG_FORWARD_PROC_SYMBOL(public_6d43130);

#define public_6d42f50 _public_6d42f50
#define public_6d42f8e _public_6d42f8e
#define public_6d42f9f _public_6d42f9f
#define public_6d42fab _public_6d42fab
#define public_6d42fb1 _public_6d42fb1
#define public_6d42fc7 _public_6d42fc7
#define public_6d42fcd _public_6d42fcd
#define public_6d42fe7 _public_6d42fe7
#define public_6d42feb _public_6d42feb
#define public_6d43000 _public_6d43000
#define public_6d43010 _public_6d43010
#define public_6d43015 _public_6d43015
#define public_6d43029 _public_6d43029
#define public_6d4303e _public_6d4303e
#define public_6d43061 _public_6d43061
#define public_6d4306a _public_6d4306a
#define public_6d4307f _public_6d4307f

PROC_DECLARE(0x6d42f30, internal_6d42f30, public_6d42f30);
extern "C" NAKED register_t __cdecl internal_6d42f30()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        cmp eax, 0x10
        jle public_6d4307f
        push esi
        push edi
        nop 
        public_6d42f50 : nop
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [ebp-4]
        cdq 
        sub eax, edx
        sar eax, 1
        mov eax, dword ptr ds : [ebx+eax*4]
        cmp cx, ax
        mov dword ptr ss : [esp+0x18], eax
        mov dx, word ptr ss : [esp+0x1A]
        mov dword ptr ss : [esp+0x1C], ecx
        mov di, word ptr ss : [esp+0x1E]
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        jb public_6d42f8e
        cmp ax, cx
        jb public_6d42fb1
        cmp di, dx
        jae public_6d42fb1
        public_6d42f8e : nop
        cmp si, ax
        ja public_6d42fe7
        mov ax, word ptr ss : [esp+0x22]
        jb public_6d42f9f
        cmp dx, ax
        jb public_6d42fe7
        public_6d42f9f : nop
        cmp si, cx
        ja public_6d42fab
        jb public_6d42fc7
        cmp di, ax
        jae public_6d42fc7
        public_6d42fab : nop
        lea eax, ss:[esp+0x28]
        jmp public_6d42feb
        public_6d42fb1 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6d43130
        add esp, 8
        test al, al
        je public_6d42fcd
        public_6d42fc7 : nop
        lea eax, ss:[esp+0x10]
        jmp public_6d42feb
        public_6d42fcd : nop
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6d43130
        add esp, 8
        test al, al
        lea eax, ss:[esp+0x28]
        jne public_6d42feb
        public_6d42fe7 : nop
        lea eax, ss:[esp+0x14]
        public_6d42feb : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], edx
        mov di, word ptr ss : [esp+0x2A]
        mov eax, ebp
        mov esi, ebx
        lea ebx, ds:[ebx]
        public_6d43000 : nop
        mov cx, word ptr ds : [esi]
        cmp dx, cx
        ja public_6d43010
        jb public_6d43015
        cmp word ptr ds : [esi+2], di
        jae public_6d43015
        public_6d43010 : nop
        add esi, 4
        jmp public_6d43000
        public_6d43015 : nop
        mov cx, word ptr ds : [eax-4]
        sub eax, 4
        cmp cx, dx
        ja public_6d43015
        jb public_6d43029
        cmp di, word ptr ds : [eax+2]
        jb public_6d43015
        public_6d43029 : nop
        cmp eax, esi
        jbe public_6d4303e
        mov ebp, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], ecx
        add esi, 4
        jmp public_6d43000
        public_6d4303e : nop
        mov ecx, ebp
        mov edx, esi
        sub ecx, esi
        sub edx, ebx
        and ecx, 0xFFFFFFFC
        and edx, 0xFFFFFFFC
        cmp ecx, edx
        push 0
        jg public_6d43061
        push ebp
        push esi
        call public_6d42f30
        mov ebp, esi
        mov dword ptr ss : [esp+0x38], ebp
        jmp public_6d4306a
        public_6d43061 : nop
        push esi
        push ebx
        call public_6d42f30
        mov ebx, esi
        public_6d4306a : nop
        mov eax, ebp
        sub eax, ebx
        sar eax, 2
        add esp, 0xC
        cmp eax, 0x10
        jg public_6d42f50
        pop edi
        pop esi
        public_6d4307f : nop
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d42f30)
    }
}

#undef public_6d42f50
#undef public_6d42f8e
#undef public_6d42f9f
#undef public_6d42fab
#undef public_6d42fb1
#undef public_6d42fc7
#undef public_6d42fcd
#undef public_6d42fe7
#undef public_6d42feb
#undef public_6d43000
#undef public_6d43010
#undef public_6d43015
#undef public_6d43029
#undef public_6d4303e
#undef public_6d43061
#undef public_6d4306a
#undef public_6d4307f
