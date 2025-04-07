#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38630);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b43920);
CLANG_FORWARD_PROC_SYMBOL(public_6b43da0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a668);

#define public_6b36102 _public_6b36102
#define public_6b36151 _public_6b36151
#define public_6b36180 _public_6b36180
#define public_6b36194 _public_6b36194
#define public_6b3619a _public_6b3619a
#define public_6b361a2 _public_6b361a2
#define public_6b361cf _public_6b361cf
#define public_6b361da _public_6b361da

PROC_DECLARE(0x6b36080, internal_6b36080, public_6b36080);
extern "C" NAKED register_t __cdecl internal_6b36080()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6b6a668 @0x6b36088*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a668
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 0x2B
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b361da
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        push edi
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        call public_6b43920
        mov cl, byte ptr ss : [esp+0x34]
        push 0xC
        mov byte ptr ss : [esp+0x18], cl
        call public_6b6a134
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0
        mov al, byte ptr ds : [esi+0x14]
        xor edi, edi
        test al, al
        mov dword ptr ss : [esp+0x28], 0
        jbe public_6b36151
        public_6b36102 : nop
        push 8
        call public_6b6a134
        mov edx, dword ptr ds : [esi+0x10]
        xor ecx, ecx
        mov cx, di
        mov dword ptr ss : [esp+0x38], eax
        add esp, 4
        shl ecx, 3
        mov edx, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+ecx+4]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6b38630
        movzx ax, byte ptr ds : [esi+0x14]
        inc edi
        cmp di, ax
        jb public_6b36102
        public_6b36151 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        call public_6b43da0
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6b3619a
        nop 
        lea esp, ss:[esp]
        public_6b36180 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6b36194
        push ecx
        call public_6b6a092
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        public_6b36194 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6b36180
        public_6b3619a : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6b361cf
        public_6b361a2 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6b6a092
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6b361a2
        mov eax, dword ptr ss : [esp+0x18]
        public_6b361cf : nop
        push eax
        call public_6b6a092
        add esp, 4
        pop edi
        pop esi
        public_6b361da : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6b36080)
    }
}

#undef public_6b36102
#undef public_6b36151
#undef public_6b36180
#undef public_6b36194
#undef public_6b3619a
#undef public_6b361a2
#undef public_6b361cf
#undef public_6b361da
